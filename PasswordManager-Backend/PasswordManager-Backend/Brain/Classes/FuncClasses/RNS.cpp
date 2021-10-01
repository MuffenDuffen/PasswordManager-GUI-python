#include "RNS.h"

#include "../LatinizeBackend/lBackend.h"
#include "../RNSBackend/RNSBackend.h"

std::string cRns::StringToRomanNumeral(const std::string input)
{
    std::string result = "";
    
    for (const auto c : input)
    {
        auto l = ToRoman(c);
        l = l.substr(0, l.length() - 1);
        
        result += l + " , ";
    }

    result = result.substr(0, result.length() - 3);
    
    return result;
}

std::string cRns::RomanNumeralToString(const std::string input)
{
    std::string result = "";

    for (const auto numsInRn = Split(input, " , "); const auto s : numsInRn)
    {
        result += static_cast<char>(FromRoman(s));
    }

    return result;
}
