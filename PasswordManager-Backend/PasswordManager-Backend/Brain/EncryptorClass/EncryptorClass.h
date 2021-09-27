#pragma once
#define DLL __declspec(dllexport)

//Includes
#include <string>

class cEncryptor
{
public:
    static void NextChar(std::string& input);
    static void InvertBits(std::string& input);
    //Latinize
    static void Ceasarion(std::string& input, unsigned long long encrypt_shift);
    //RomanNumeralStuff
    //HexStuff
    static void CharAdder(std::string& input, const std::string& pass_phrase);
    //PythagoranTheorem
    void ReverseString(std::string& input);
    //StringLoLifier
    //Circumference
    //BitReverser
};
