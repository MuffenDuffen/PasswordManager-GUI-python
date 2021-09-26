#pragma once
#define DLL __declspec(dllexport)

//Includes
#include <string>

class cEncryptor
{
public:
    DLL static void NextChar(std::string& input);
    DLL static void InvertBits(std::string& input);
    //Latinize
    DLL static void Ceasarion(std::string& input, unsigned long long encrypt_shift);
    //RomanNumeralStuff
    //HexStuff
    DLL static void CharAdder(std::string& input, const std::string& pass_phrase);
    //PythagoranTheorem
    DLL void ReverseString(std::string& input);
    //StringLoLifier
    //Circumference
    //BitReverser
};
