#pragma once
#include <string>
#include <vector>

class cEncryptString
{
public:
    static std::wstring EncryptString(std::wstring input, std::vector<unsigned long long> key,
                                      unsigned long long encrypt_shift, std::wstring pass_phrase);
    static std::wstring DeryptString(std::wstring input, std::vector<unsigned long long> key,
                                     unsigned long long encrypt_shift, std::wstring pass_phrase);
};
