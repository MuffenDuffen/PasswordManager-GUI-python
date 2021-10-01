#include "Char.h"

void cChar::NextChar(std::wstring& input)
{
    for (auto& c : input)
    {
        c += 1;
    }
}

void cChar::PrevChar(std::wstring& input)
{
    for (auto& c : input)
    {
        c -= 1;
    }
}
