#include "Encryptor.h"

#include <algorithm>
#include <random>

#include "HexStuffBackend/HexStuff.h"
#include "HexStuffBackend/HexStuffBackend.h"
#include "LatinizeBackend/Latinizer.h"
#include "RNSBackend/RNS.h"

std::wstring cEncryptor::EncryptString(std::wstring input, std::vector<unsigned long long> key,
                                       const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    for (const auto k : key)
    {
        switch (k)
        {
            case 0:
                NextChar(input);
                break;
            case 1:
                InvertBits(input);
                break;
            case 2:
                input = cLatinizer::StringToLatin(input);
                break;
            case 3:
                Caesarion(input, encrypt_shift);
                break;
            case 4:
                input = cRns::StringToRomanNumeral(input);
                break;
            case 5:
                input = cHexStuff::ToHex(input);
                break;
            case 6:
                CharAdder(input, pass_phrase);
                break;
            case 7:
                PythagoreanE(input);
                break;
            case 8:
                ReverseString(input);
                break;
            case 9:
                StringLoLifier(input);
                break;
            case 10:
                CircumferanceOfString(input);
                break;
            case 11:
                BitReverser(input);
            default: ;
        }
    }

    return input;
}

void cEncryptor::NextChar(std::wstring& input)
{
    for (auto& c : input)
    {
        c += 1;
    }
}

void cEncryptor::InvertBits(std::wstring& input)
{
    for (auto& c : input)
    {
        c = ~c;
    }
}

void cEncryptor::Caesarion(std::wstring& input, const unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c += encrypt_shift;
    }
}

void cEncryptor::CharAdder(std::wstring& input, const std::wstring pass_phrase)
{
    for (auto& c : input)
    {
        for (const auto cc : pass_phrase)
        {
            c += cc;
        }
    }
}

void cEncryptor::PythagoreanE(std::wstring& input)
{
    for (auto& c : input)
    {
        c = static_cast<wchar_t>(round(sqrt(pow(c, 2) * 2)));
    }
}

void cEncryptor::ReverseString(std::wstring& input)
{
    std::ranges::reverse(input);
}

void cEncryptor::StringLoLifier(std::wstring& input)
{
    for (int i = 0; i < input.length(); i++)
    {
        if (i % 2 == 0) input.insert(i, L"L");
    }
}

void cEncryptor::CircumferanceOfString(std::wstring& input)
{
    for (auto& c : input) c = static_cast<wchar_t>(round(c*std::_Pi));
}

void cEncryptor::BitReverser(std::wstring& input)
{
    for (auto& c : input)
    {
        auto binary = DecimalTo(c, 2);

        while (binary.length() < 16) binary.insert(0, L"0");

        std::ranges::reverse(binary);

        c = std::stoi(binary, nullptr, 2);
    }
}
