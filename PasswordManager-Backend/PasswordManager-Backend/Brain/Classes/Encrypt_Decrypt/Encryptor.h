#pragma once

#define DDLL __declspec(dllexport)
#include <string>
#include <vector>

class cEncryptor
{
public:
    //EncryptString
    DDLL static std::wstring EncryptString(std::wstring input, std::vector<unsigned long long> key, unsigned long long encrypt_shift, std::wstring
                                           pass_phrase);

    //EncryptionMethods
    DDLL static void NextChar(std::wstring& input);
    DDLL static void InvertBits(std::wstring& input);
    DDLL static void Caesar(std::wstring& input, unsigned long long encrypt_shift);
    DDLL static void CharAdder(std::wstring& input, std::wstring pass_phrase);
    DDLL static void PythagoreanE(std::wstring& input);
    DDLL static void ReverseString(std::wstring& input);
    DDLL static void StringLoLifier(std::wstring& input);
    DDLL static void CircumferencesOfString(std::wstring& input);
    DDLL static void BitReverser(std::wstring& input);
};
