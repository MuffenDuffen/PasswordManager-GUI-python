#pragma once
#include <stack>
#include <string>

inline char SingleDigitPreprocees(const int n)
{
    if(n<10) return n+'0';
    else if(n >= 10){
        return 'A'+(n-10);
    }
    return 0;
}

inline std::wstring DecimalTo(int decimal, const int base = 16)
{
    std::stack<char> remainders;
    if(decimal == 0) return L"0";
    while(decimal > 0)
    {
        char rem = SingleDigitPreprocees(decimal%base);
        decimal = decimal/base;
        remainders.push(rem);
    }
    std::wstring anyBase = L""; 
    while(!remainders.empty())
    {
        anyBase += remainders.top();
        remainders.pop();
    }
    return anyBase;
}

inline int ToDecimal(const std::wstring number, const int base)
{
    int decimal = 0;
    const int size = number.length();
    for(int i=0; i<size; i++) //check for each position
    {
        //calculate digit * base^position for each position
        
        if(number[i]>='A') // if it has more than 10 digits
            {
            decimal += (number[i]-'A'+10) *pow(base,size-i-1);
            } 
        else
        {
            decimal += (number[i]-'0') *pow(base,size-i-1);
        }
    }
    return decimal;
}