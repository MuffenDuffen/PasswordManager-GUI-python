#pragma once
#include <string>

class cCeasarion
{
public:
    static void CeasarionE(std::string& input, unsigned long long encrypt_shift);
    static void CeasarionD(std::string& input, unsigned long long encrypt_shift);
};
