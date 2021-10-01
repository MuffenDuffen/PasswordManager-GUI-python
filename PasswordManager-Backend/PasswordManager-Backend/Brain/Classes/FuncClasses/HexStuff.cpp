#include "HexStuff.h"

#include "../HexStuffBackend/HexStuffBackend.h"
#include "../LatinizeBackend/lBackend.h"

std::string cHexStuff::ToHex(const std::string input)
{
    std::string result = "";
    
    for (const auto c : input)
    {
        result += DecimalTo(c) + ",";
    }

    result = result.substr(0, result.length() - 1);
    
    return result;
}

std::string cHexStuff::FromHex(const std::string input)
{
    std::string result = "";

    for (const auto ss = Split(input, ","); auto s : ss)
    {
        result += static_cast<char>(ToDecimal(s, 16));
    }
    
    return result;
}
