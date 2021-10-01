#include "Latinizer.h"

#include "../LatinizeBackend/lBackend.h"

std::string cLatinizer::StringToLatin(const std::string input)
{
    std::string result = "";

    for (const auto c : input)
    {
        result.append(IntToLatin(c) + " , ");
    }

    result = result.substr(0, result.length() - 3);

    return result;
}

std::string cLatinizer::LatinToString(const std::string input)
{
    const auto strings = Split(input, " , ");

    std::string result = "";

    for (const auto s : strings)
    {
        result += static_cast<char>(LatinToNumber(s));
    }

    return result;
}
