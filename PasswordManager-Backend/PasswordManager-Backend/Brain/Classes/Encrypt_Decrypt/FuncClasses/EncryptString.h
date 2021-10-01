#pragma once
#include <string>
#include <vector>

class cEncryptString
{
public:
    static const wchar_t* EncryptString(std::wstring input, std::vector<unsigned long long> key,
                                        unsigned long long encrypt_shift, std::wstring pass_phrase);
    static const wchar_t* DeryptString(std::wstring input, std::vector<unsigned long long> key,
                                       unsigned long long encrypt_shift, std::wstring pass_phrase);
};
