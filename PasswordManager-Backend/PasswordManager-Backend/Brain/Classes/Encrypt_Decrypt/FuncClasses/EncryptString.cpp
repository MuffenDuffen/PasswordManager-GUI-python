#include "EncryptString.h"
#include "../Encryptor.h"

const wchar_t* cEncryptString::EncryptString(std::wstring input, const std::vector<unsigned long long> key, const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    auto e = new cEncryptor();
    
    for (const auto k : key)
    {
        switch (k)
        {
            case 0:
                e->NextChar(input);
                break;
            case 1:
                e->InvertBits(input);
                break;
            case 2:
                input = cEncryptor::Latinizer(input);
                break;
            case 3:
                e->Ceasarion(input, encrypt_shift);
                break;
            case 4:
                input = cEncryptor::ToRomanNumeral(input);
                break;
            case 5:
                input = cEncryptor::ToHex(input);
                break;
            case 6:
                e->CharAdder(input, pass_phrase);
                break;
            case 7:
                e->PythagoranTheoremE(input);
                break;
            case 8:
                e->ReverseString(input);
                break;
            case 9:
                input = cEncryptor::LoLifier(input);
                break;
            case 10:
                e->Circ(input);
                break;
            case 11:
                e->BitReverser(input);
                break;
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
