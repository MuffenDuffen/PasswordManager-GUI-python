#include <iostream>
#include <algorithm>

#include "../EncryptorClass.h"

const char* cEncryptor::EncryptString(const char* input)
{
	auto encrypt = new std::string(input);

    std::srand(encrypt->length());

    Expander(*encrypt);

    std::replace(encrypt->begin(), encrypt->end(), '\n', 'Q');
	
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

