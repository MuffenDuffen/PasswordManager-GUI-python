#include "CharAdder.h"

void cCharAdder::CharAdder(const std::string& input, const std::string pass_phrase)
{
    for (const auto c : pass_phrase)
    {
        for (auto cc : input)
        {
            cc += c;
        }
    }
}

void cCharAdder::CharRemover(const std::string& input, const std::string pass_phrase)
{
    for (const auto c : pass_phrase)
    {
        for (auto cc : input)
        {
            cc -= c;
        }
    }
}
