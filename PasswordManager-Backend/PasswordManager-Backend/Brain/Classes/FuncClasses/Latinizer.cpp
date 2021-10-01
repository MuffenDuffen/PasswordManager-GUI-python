#include "Latinizer.h"

#include "../LatinizeBackend/lBackend.h"

std::wstring cLatinizer::StringToLatin(const std::wstring input)
{
    std::wstring result = L"";

    for (const auto c : input)
    {
        result.append(IntToLatin(c) + L" , ");
    }

    result = result.substr(0, result.length() - 3);

    return result;
}

std::wstring cLatinizer::LatinToString(const std::wstring input)
{
    const auto strings = Split(input, L" , ");

    std::wstring result = L"";

    for (const auto s : strings)
    {
        result += static_cast<char>(LatinToNumber(s));
    }

    return result;
}
