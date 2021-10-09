#include "Converter.h"

#include <iostream>

std::wstring cConverter::SToBin(const std::wstring& input)
{
    std::wstring result = L"";

    for (const auto c : input)
    {
        const auto buffer = new char();

        _itoa_s(c, buffer, sizeof(buffer) / sizeof(char), 2);

        auto binary = std::string(buffer);

        while (binary.length() < 16) binary.insert(0, 1, '0');

        auto binaryW = std::wstring(binary.begin(), binary.end());

        result += binaryW + L" ";
    }

    result = result.substr(0, result.length() - 1);

    return result;
}
