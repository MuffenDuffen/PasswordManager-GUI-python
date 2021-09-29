#include "HexStuffE.h"

#include <ios>
#include <stack>

int ToDecimal(std::string number, int base)
{
    int decimal = 0;
    int size = number.length();
    for (int i = 0; i < size; i++) //check for each position
    {
        //calculate digit * base^position for each position

        if (number[i] >= 'A') // if it has more than 10 digits
        {
            decimal += (number[i] - 'A' + 10) * pow(base, size - i - 1);
        }
        else
        {
            decimal += (number[i] - '0') * pow(base, size - i - 1);
        }
    }
    return decimal;
}

char SingleDigitPreprocees(int n)
{
    if (n < 10) return n + '0';
    if (n >= 10)
    {
        return 'A' + (n - 10);
    }
    return 0;
}

std::string DecimalTo(int decimal, int base)
{
    std::stack<char> remainders;
    if (decimal == 0) return "0";
    while (decimal > 0)
    {
        char rem = SingleDigitPreprocees(decimal % base);
        decimal = decimal / base;
        remainders.push(rem);
    }
    std::string any_base = "";
    while (!remainders.empty())
    {
        any_base += remainders.top();
        remainders.pop();
    }
    return any_base;
}

std::string StringToHex(const std::string& input)
{
    std::string result = "";

    for (auto c : input)
    {
        result += DecimalTo(c, 16) + " , ";
    }

    result = result.substr(0, result.length() - 3);
    
    return result;
}
