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

    DDLL static std::string ToRomanNumeral(std::string input);

    DDLL static std::string ToHex(std::string input);

    DDLL static void CharAdder(const std::string& input, std::string pass_phrase);

    DDLL static void PythagoranTheoremE(std::string& input);

    DDLL static void ReverseString(std::string& input);

    DDLL static std::string LoLifier(std::string input);

    DDLL static void Circ(const std::string& input);

    DDLL static void BitReverser(std::string& input);
};
