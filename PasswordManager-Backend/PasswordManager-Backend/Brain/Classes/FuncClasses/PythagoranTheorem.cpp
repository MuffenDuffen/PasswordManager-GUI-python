#include "PythagoranTheorem.h"
#include <math.h>

void cPythagoranTheorem::PythagoranTheoremE(std::string& input)
{
    for (auto& c : input)
    {
        c = static_cast<char>(round(sqrt(pow(c, 2) * 2)));
    }
}

void cPythagoranTheorem::PythagoranTheoremD(std::string& input)
{
    for (auto& c : input)
    {
        c = static_cast<char>(round(sqrt(pow(c, 2) / 2)));
    }
}
