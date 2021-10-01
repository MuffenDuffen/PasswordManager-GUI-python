#include "PythagoranTheorem.h"
#include <math.h>

void cPythagoranTheorem::PythagoranTheoremE(std::wstring& input)
{
    for (auto& c : input)
    {
        c = static_cast<char>(round(sqrt(pow(c, 2) * 2)));
    }
}

void cPythagoranTheorem::PythagoranTheoremD(std::wstring& input)
{
    for (auto& c : input)
    {
        c = static_cast<char>(round(sqrt(pow(c, 2) / 2)));
    }
}
