#include "HexStuff.h"

#include "../HexStuffBackend/HexStuffBackend.h"
#include "../LatinizeBackend/lBackend.h"

std::wstring cHexStuff::ToHex(const std::wstring input)
{
    std::wstring result = L"";

    for (const auto c : input)
    {
        result += DecimalTo(c) + L",";
    }

    result = result.substr(0, result.length() - 1);

    return result;
}

std::wstring cHexStuff::FromHex(const std::wstring input)
{
    std::wstring result = L"";

    for (const auto ss = Split(input, L","); const auto s : ss)
    {
        result += static_cast<char>(ToDecimal(s, 16));
    }

    return result;
}
