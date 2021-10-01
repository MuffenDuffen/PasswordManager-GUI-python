#pragma once
#include <string>

#define DDLL __declspec(dllexport)

class cEncryptor
{
public:
    DDLL static const char* EncryptString(std::string input);
    
    DDLL static void NextChar(std::string& input);

    DDLL static void InvertBits(std::string& input);

    DDLL static std::string Latinizer(std::string input);

    DDLL static void Ceasarion(std::string& input, const unsigned long long encrypt_shift);
};
