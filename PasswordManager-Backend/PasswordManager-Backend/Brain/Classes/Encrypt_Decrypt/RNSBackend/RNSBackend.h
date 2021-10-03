#pragma once
#include <string>

inline std::wstring ToRoman(const int number)
{
    if ((number < 0) || (number > 3999)) throw "insert value between 1 and 3999";
    if (number < 1) return L"";            
    if (number >= 1000) return L"M," + ToRoman(number - 1000);
    if (number >= 900) return L"CM," + ToRoman(number - 900); 
    if (number >= 500) return L"D," + ToRoman(number - 500);
    if (number >= 400) return L"CD," + ToRoman(number - 400);
    if (number >= 100) return L"C," + ToRoman(number - 100);            
    if (number >= 90) return L"XC," + ToRoman(number - 90);
    if (number >= 50) return L"L," + ToRoman(number - 50);
    if (number >= 40) return L"XL," + ToRoman(number - 40);
    if (number >= 10) return L"X," + ToRoman(number - 10);
    if (number >= 9) return L"IX," + ToRoman(number - 9);
    if (number >= 5) return L"V," + ToRoman(number - 5);
    if (number >= 4) return L"IV," + ToRoman(number - 4);
    if (number >= 1) return L"I," + ToRoman(number - 1);
    throw "something bad happened";
}

inline int FromRoman(const std::wstring input)
{
    const auto map = new std::map<std::wstring, int>{
        {L"M", 1000},
        {L"CM", 900},
        {L"D" , 500},
        {L"CD", 400},
        {L"C", 100},
        {L"XC", 90},
        {L"L", 50},
        {L"XL", 40},
        {L"X", 10},
        {L"IX", 9},
        {L"V", 5},
        {L"IV", 4},
        {L"I", 1}
    };
    
    int result = 0;

    for (const auto nums = Split(input, L","); auto n : nums)
    {
        result += map->at(n);
    }
    
    return result;
}