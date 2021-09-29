#include <iostream>
#include <algorithm>

#include "../EncryptorClass.h"
#include "../../HexStuff/Decrypt/HexStuffD.h"
#include "../../HexStuff/Encrypt/HexStuffE.h"
#include "../../Latinize/Decrypt/LatinizeD.h"
#

const char* cEncryptor::EncryptString(std::string input)
{
    auto encrypt = new std::string(input);

    std::srand(encrypt->length());

    //Encrypt/Decrypt
    
    std::ranges::replace(*encrypt, '\n', 'Q');

    return encrypt->c_str();
}

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

std::string cEncryptor::StringToLatin(std::string& input)
{
    return std::string(StringToLatin(input));
}

void cEncryptor::Ceasarion(std::string& input, const unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c += encrypt_shift;
    }
}

std::string cEncryptor::HexStuff(const std::string& input)
{
    return std::string(StringToHex(input));
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
    std::ranges::reverse(input);
}

void cEncryptor::Expander(std::string& input)
{
    const int rn = rand() % input.length(); // Random number

    for (int i = 0; i < rn; ++i)
    {
        const int random = rand() % input.length();
        char c = rand() % 255;
        input.insert(random, &c);
    }
}
