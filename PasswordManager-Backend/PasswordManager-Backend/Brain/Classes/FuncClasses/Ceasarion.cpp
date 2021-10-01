#include "Ceasarion.h"

void cCeasarion::CeasarionE(std::string& input, unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c += encrypt_shift;
    }
}

void cCeasarion::CeasarionD(std::string& input, unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c -= encrypt_shift;
    }
}