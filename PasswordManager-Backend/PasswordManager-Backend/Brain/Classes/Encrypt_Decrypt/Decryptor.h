#pragma once
#include "Encryptor.h"

class cDecryptor
{
public:
    DDLL static const char* DecryptString(const std::wstring input, unsigned long long key[], const unsigned long long encrypt_shift, const std::wstring
                                          pass_phrase);
    
    DDLL static void PrevChar(std::wstring& input);

    DDLL static void InvertBits(std::wstring& input);

    DDLL static std::wstring LatinizerD(std::wstring input);

    DDLL static void CeasarionD(std::wstring& input, const unsigned long long encrypt_shift);

    DDLL static std::wstring FromRomanNumeral(std::wstring input);

    DDLL static std::wstring FromHex(std::wstring input);

    DDLL static void CharRemover(const std::wstring& input, std::wstring pass_phrase);

    DDLL static void PythagoranTheoremD(std::wstring& input);

    DDLL static void ReverseString(std::wstring& input);

    DDLL static std::wstring LoLifierD(std::wstring input);

    DDLL static void CircD(const std::wstring& input);

    DDLL static void BitReverserD(std::wstring& input);
};
