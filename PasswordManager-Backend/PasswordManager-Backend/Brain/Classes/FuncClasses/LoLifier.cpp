#include "LoLifier.h"

std::wstring cLoLifier::LoLifier(std::wstring input)
{
    for (auto i = 0; i < input.length(); i++) if (i % 2 != 0) input = input.insert(i, L"L");

    return input;
}

std::wstring cLoLifier::UnLoLifier(const std::wstring input)
{
    std::wstring result = L"";
    
    for (auto i = 0; i < input.length(); i++)
    {
        if (i % 2 == 0 || input[i] == 'L') continue;
        result += input[i];
    }

    return result;
}
