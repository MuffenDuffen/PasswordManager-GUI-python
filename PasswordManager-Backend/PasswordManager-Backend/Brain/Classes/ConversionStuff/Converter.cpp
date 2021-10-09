#include "Converter.h"

#include <bitset>
#include <iostream>

std::wstring cConverter::SToBin(const std::wstring& input)
{
    std::wstring result = L"";

    for (const auto c : input)
    {
        auto binary = std::bitset<16>(c).to_string();

        result += std::wstring(binary.begin(), binary.end()) + L" ";
    }

    result = result.substr(0, result.length() - 1);

    return result;
}
