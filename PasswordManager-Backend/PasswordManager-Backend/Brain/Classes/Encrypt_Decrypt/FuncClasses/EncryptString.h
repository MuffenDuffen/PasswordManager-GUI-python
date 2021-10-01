#pragma once
#include <string>

class cEncryptString
{
public:
    static const char* EncryptString(std::wstring input, unsigned long long key[], unsigned long long encrypt_shift, std::wstring pass_phrase);
    static const char* DeryptString(std::wstring input, unsigned long long key[], unsigned long long encrypt_shift, std::wstring pass_phrase);
};
