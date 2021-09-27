#pragma once
#define DLL __declspec(dllexport)

//Includes
#include <string>

class cDecryptor
{
public:
    static void PrevChar(std::string& input);
    static void InvertBits(std::string& input);
};
