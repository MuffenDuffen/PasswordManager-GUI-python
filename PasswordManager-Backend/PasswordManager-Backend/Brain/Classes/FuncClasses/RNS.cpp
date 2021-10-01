#include "RNS.h"

#include "../LatinizeBackend/lBackend.h"
#include "../RNSBackend/RNSBackend.h"

std::wstring cRns::StringToRomanNumeral(const std::wstring input)
{
    std::wstring result = L"";
    
    for (const auto c : input)
    {
        auto l = ToRoman(c);
        l = l.substr(0, l.length() - 1);
        
        result += l + L" , ";
    }

    result = result.substr(0, result.length() - 3);
    
    return result;
}

std::wstring cRns::RomanNumeralToString(const std::wstring input)
{
    std::wstring result = L"";

    for (const auto numsInRn = Split(input, L" , "); const auto s : numsInRn)
    {
        result += static_cast<char>(FromRoman(s));
    }

    return result;
}
