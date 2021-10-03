#pragma once
#include "Encryptor.h"

class cDecryptor
{
public:
    DDLL static std::wstring DecryptString(std::wstring input, std::vector<unsigned long long> key, const unsigned long long encrypt_shift, const std::wstring pass_phrase);

    DDLL static void PrevChar(std::wstring& input);
    DDLL static void InvertBits(std::wstring& input);
    DDLL static void Caesarion(std::wstring& input, const unsigned long long encrypt_shift);
    DDLL static void CharRemover(std::wstring& input, const std::wstring pass_phrase);
    DDLL static void PythagoreanD(std::wstring& input);
    DDLL static void ReverseString(std::wstring& input);
    DDLL static void UnStringLoLifier(std::wstring& input);
    DDLL static void DeCircumferanceOfString(std::wstring& input);
    DDLL static void BitReverser(std::wstring& input);
};
