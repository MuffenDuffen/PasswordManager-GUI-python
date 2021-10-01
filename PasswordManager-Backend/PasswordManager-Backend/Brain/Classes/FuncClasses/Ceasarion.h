#pragma once
#include <string>

class cCeasarion
{
public:
    static void CeasarionE(std::wstring& input, unsigned long long encrypt_shift);
    static void CeasarionD(std::wstring& input, unsigned long long encrypt_shift);
};
