#pragma once

#define DDLL _declspec(dllexport)

//Includes
#include <string>

class cEncryptor
{
public:
    static const char* EncryptString(std::string input);
    ///Encryption Methods

    static void NextChar(std::string& input);
    static void InvertBits(std::string& input);
    static std::string StringToLatin(std::string& input);
    static void Ceasarion(std::string& input, unsigned long long encrypt_shift);
    //RomanNumeralStuff
    DDLL static std::string HexStuff(const std::string& input);
    static void CharAdder(std::string& input, const std::string& pass_phrase);
    //PythagoranTheorem
    static void ReverseString(std::string& input);
    static void Expander(std::string& input);
    //Circumference
    //BitReverser
};
