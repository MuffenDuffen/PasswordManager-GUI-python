#pragma once
#include "Encryptor.h"

class cDecrypt
{
public:
    DDLL static std::wstring DecryptString(std::wstring input, std::vector<unsigned long long> key, unsigned long long encrypt_shift, std::wstring pass_phrase);

    DDLL static void PrevChar(std::wstring& input);
    DDLL static void InvertBits(std::wstring& input);
    DDLL static void Caesar(std::wstring& input, unsigned long long encrypt_shift);
    DDLL static void CharRemover(std::wstring& input, std::wstring pass_phrase);
    DDLL static void PythagoreanD(std::wstring& input);
    DDLL static void ReverseString(std::wstring& input);
    DDLL static void UnStringLoLifier(std::wstring& input);
    DDLL static void DeCircumferencesOfString(std::wstring& input);
    DDLL static void BitReverser(std::wstring& input);
};
