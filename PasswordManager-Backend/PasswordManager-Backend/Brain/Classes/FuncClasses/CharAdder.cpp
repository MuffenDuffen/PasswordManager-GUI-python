#include "CharAdder.h"

void cCharAdder::CharAdder(const std::wstring& input, const std::wstring pass_phrase)
{
    for (const auto c : pass_phrase)
    {
        for (auto cc : input)
        {
            cc += c;
        }
    }
}

void cCharAdder::CharRemover(const std::wstring& input, const std::wstring pass_phrase)
{
    for (const auto c : pass_phrase)
    {
        for (auto cc : input)
        {
            cc -= c;
        }
    }
}
