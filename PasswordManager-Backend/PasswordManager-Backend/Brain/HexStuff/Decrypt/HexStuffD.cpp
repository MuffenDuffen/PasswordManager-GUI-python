#include "HexStuffD.h"
#include "../../Latinize/Decrypt/LatinizeD.h"
#include "../Encrypt/HexStuffE.h"

std::string HexToString(const std::string& input)
{
    std::string result = "";

    for (const auto hexes = Split(input, " , "); const auto hex : hexes)
    {
        result += ToDecimal(hex, 16);
    }

    return result;
}
