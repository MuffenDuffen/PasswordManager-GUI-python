#include "EncryptString.h"
#include "../Encryptor.h"

const wchar_t* cEncryptString::EncryptString(std::wstring input, const std::vector<unsigned long long> key, const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    for (const auto k : key)
    {
        switch (k)
        {
            case 0:
                cEncryptor::NextChar(input);
            case 1:
                cEncryptor::InvertBits(input);
            case 2:
                input = cEncryptor::Latinizer(input);
            case 3:
                cEncryptor::Ceasarion(input, encrypt_shift);
            case 4:
                input = cEncryptor::ToRomanNumeral(input);
            case 5:
                input = cEncryptor::ToHex(input);
            case 6:
                cEncryptor::CharAdder(input, pass_phrase);
            case 7:
                cEncryptor::PythagoranTheoremE(input);
            case 8:
                cEncryptor::ReverseString(input);
            case 9:
                input = cEncryptor::LoLifier(input);
            case 10:
                cEncryptor::Circ(input);
            case 11:
                cEncryptor::BitReverser(input);
        default: ;
        }
    }

    const wchar_t* str = input.c_str();
    
    return str;
}

const wchar_t* cEncryptString::DeryptString(std::wstring input, std::vector<unsigned long long> key, unsigned long long encrypt_shift, std::wstring pass_phrase)
{
    return L"LeL";
}
