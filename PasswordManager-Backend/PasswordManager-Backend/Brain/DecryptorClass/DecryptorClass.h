#pragma once
#define DLL __declspec(dllexport)

//Includes
#include <string>

class cDecryptor
{
public:
    DLL static void PrevChar(std::string& input);
    DLL static void InvertBits(std::string& input);
};
