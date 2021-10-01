#include "Char.h"

void cChar::NextChar(std::string& input)
{
    for (auto& c : input)
    {
        c += 1;
    }
}

void cChar::PrevChar(std::string& input)
{
    for (auto& c : input)
    {
        c -= 1;
    }
}
