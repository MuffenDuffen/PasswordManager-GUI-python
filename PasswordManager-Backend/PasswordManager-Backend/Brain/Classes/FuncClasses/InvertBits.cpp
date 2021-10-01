#include "InvertBits.h"

void cInvertBits::InvertBits(std::string& input)
{
    for (auto& c : input)
    {
        c = ~c;
    }
}
