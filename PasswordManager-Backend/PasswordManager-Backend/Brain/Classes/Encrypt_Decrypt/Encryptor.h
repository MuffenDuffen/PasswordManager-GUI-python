#pragma once

#define DDLL __declspec(dllexport)
#include <string>
#include <vector>

class cEncryptor
{
public:
    //EncryptString
    DDLL static std::wstring EncryptString(std::wstring input, std::vector<unsigned long long> key, const unsigned long long encrypt_shift, const std::wstring  pass_phrase);

    //EncryptionMethods
    DDLL static void NextChar(std::wstring& input);
    DDLL static void InvertBits(std::wstring& input);
    DDLL static void Caesarion(std::wstring& input, const unsigned long long encrypt_shift);
    DDLL static void CharAdder(std::wstring& input, const std::wstring pass_phrase);
    DDLL static void PythagoreanE(std::wstring& input);
    DDLL static void ReverseString(std::wstring& input);
    DDLL static void StringLoLifier(std::wstring& input);
    DDLL static void CircumferanceOfString(std::wstring& input);
    DDLL static void BitReverser(std::wstring& input);
};
