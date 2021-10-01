#include "InvertBits.h"

void cInvertBits::InvertBits(std::wstring& input)
{
    for (auto& c : input)
    {
        c = ~c;
    }
}
