#pragma once
#define DLL __declspec(dllexport)

//Includes
#include <string>

class cEncryptor
{
public:
    static const char* EncryptString(const char* input);
    ///Encryption Methods
    
    static void NextChar(std::string& input);
    static void InvertBits(std::string& input);
    //Latinize
    static void Ceasarion(std::string& input, unsigned long long encrypt_shift);
    //RomanNumeralStuff
    //HexStuff
    static void CharAdder(std::string& input, const std::string& pass_phrase);
    //PythagoranTheorem
    static void ReverseString(std::string& input);
    static void Expander(std::string& input);
    //Circumference
    //BitReverser
};
