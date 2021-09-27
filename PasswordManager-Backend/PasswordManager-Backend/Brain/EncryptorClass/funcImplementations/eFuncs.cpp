#include <iostream>

#include "../EncryptorClass.h"

void cEncryptor::NextChar(std::string& input)
{
    for (auto& c : input)
    {
        c += 1;
    }
}

void cEncryptor::InvertBits(std::string& input)
{
    for (auto& c : input)
    {
        c = ~c;
    }
}

void cEncryptor::Ceasarion(std::string& input, unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c += encrypt_shift;
    }
}

void cEncryptor::CharAdder(std::string& input, const std::string& pass_phrase)
{
    for (const auto passChar : pass_phrase)
    {
        for (auto& c : input)
        {
            c += passChar;
        }
    }
}

void cEncryptor::ReverseString(std::string& input)
{
    std::reverse(input.begin(), input.end());
}

void cEncryptor::StringLoLifier(std::string& input)
{
	
}

