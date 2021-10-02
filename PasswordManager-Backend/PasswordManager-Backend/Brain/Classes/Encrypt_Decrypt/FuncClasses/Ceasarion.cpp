#include "Ceasarion.h"

#include <iostream>

void cCeasarion::CeasarionE(std::wstring& input, const unsigned long long encrypt_shift)
{
    for (auto i = 0; i < input.length(); i++)
    {
        std::cout << "LeL" << std::endl;
        input[i] = input[i] += encrypt_shift;
    }
}

void cCeasarion::CeasarionD(std::wstring& input, unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c -= encrypt_shift;
    }
}