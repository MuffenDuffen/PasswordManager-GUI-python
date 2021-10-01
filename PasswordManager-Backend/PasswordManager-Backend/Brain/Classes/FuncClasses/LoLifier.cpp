#include "LoLifier.h"

std::string cLoLifier::LoLifier(std::string input)
{
    for (auto i = 0; i < input.length(); i++) if (i % 2 != 0) input = input.insert(i, "L");

    return input;
}

std::string cLoLifier::UnLoLifier(const std::string input)
{
    std::string result = "";
    
    for (auto i = 0; i < input.length(); i++)
    {
        if (i % 2 == 0 || input[i] == 'L') continue;
        result += input[i];
    }

    return result;
}
