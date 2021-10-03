#include "EncryptString.h"

#include <algorithm>
#include <iostream>
#include <fstream>

#include "../Decryptor.h"
#include "../Encryptor.h"

std::wstring cEncryptString::EncryptString(std::wstring input, const std::vector<unsigned long long> key,
                                           const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    std::wofstream enc("enc.txt");
    
    const auto e = new cEncryptor();
    
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

        enc << input + L"\n";
    }

    enc.close();
    
    return input;
}

std::wstring cEncryptString::DeryptString(std::wstring input, std::vector<unsigned long long> key,
                                          const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    const auto d = new cDecryptor();

    std::ranges::reverse(key);
    
    for (const auto k : key)
    {
        switch (k)
        {
        case 0:
            d->PrevChar(input);
            break;
        case 1:
            d->InvertBits(input);
            break;
        case 2:
            input = cDecryptor::LatinizerD(input);
            break;
        case 3:
            d->CeasarionD(input, encrypt_shift);
            break;
        case 4:
            input = cDecryptor::FromRomanNumeral(input);
            break;
        case 5:
            input = cDecryptor::FromHex(input);
            break;
        case 6:
            d->CharRemover(input, pass_phrase);
            break;
        case 7:
            d->PythagoranTheoremD(input);
            break;
        case 8:
            d->ReverseString(input);
            break;
        case 9:
            input = cDecryptor::LoLifierD(input);
            break;
        case 10:
            d->CircD(input);
            break;
        case 11:
            d->BitReverserD(input);
            break;
        default: ;
        }
    }
    
    return input;
}
