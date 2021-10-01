#pragma once
#include "Encryptor.h"

class cDecryptor
{
public:
    DDLL static const char* DecryptString(std::string input);
    
    DDLL static void PrevChar(std::string& input);

    DDLL static void InvertBits(std::string& input);

    DDLL static std::string LatinizerD(std::string input);

    DDLL static void CeasarionD(std::string& input, const unsigned long long encrypt_shift);

    DDLL static std::string FromRomanNumeral(std::string input);

    DDLL static std::string FromHex(std::string input);

    DDLL static void CharRemover(const std::string& input, std::string pass_phrase);

    DDLL static void PythagoranTheoremD(std::string& input);

    DDLL static void ReverseString(std::string& input);

    DDLL static std::string LoLifierD(std::string input);

    DDLL static void CircD(const std::string& input);

    DDLL static void BitReverserD(std::string& input);
};
