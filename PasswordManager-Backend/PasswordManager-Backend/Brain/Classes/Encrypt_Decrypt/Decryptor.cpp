﻿#include "Decryptor.h"

#include <algorithm>
#include <random>

#include "HexStuffBackend/HexStuff.h"
#include "HexStuffBackend/HexStuffBackend.h"
#include "LatinizeBackend/Latinizer.h"
#include "RNSBackend/RNS.h"

std::wstring cDecrypt::DecryptString(std::wstring input, std::vector<unsigned long long> key,
                                     const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    std::ranges::reverse(key);

    for (const auto k : key)
    {
        switch (k)
        {
        case 0:
            PrevChar(input);
            break;
        case 1:
            InvertBits(input);
            break;
        case 2:
            input = cLatinizer::LatinToString(input);
            break;
        case 3:
            Caesar(input, encrypt_shift);
            break;
        case 4:
            input = cRns::RomanNumeralToString(input);
            break;
        case 5:
            input = cHexStuff::FromHex(input);
            break;
        case 6:
            CharRemover(input, pass_phrase);
            break;
        case 7:
            PythagoreanD(input);
            break;
        case 8:
            ReverseString(input);
            break;
        case 9:
            UnStringLoLifier(input);
            break;
        case 10:
            DeCircumferencesOfString(input);
            break;
        case 11:
            BitReverser(input);
        default: ;
        }
    }

    return input;
}

void cDecrypt::PrevChar(std::wstring& input)
{
    for (auto& c : input)
    {
        c -= 1;
    }
}

void cDecrypt::InvertBits(std::wstring& input)
{
    for (auto& c : input)
    {
        c = ~c;
    }
}

void cDecrypt::Caesar(std::wstring& input, const unsigned long long encrypt_shift)
{
    for (auto& c : input)
    {
        c -= encrypt_shift;
    }
}

void cDecrypt::CharRemover(std::wstring& input, const std::wstring pass_phrase)
{
    for (auto& c : input)
    {
        for (const auto cc : pass_phrase)
        {
            c -= cc;
        }
    }
}

void cDecrypt::PythagoreanD(std::wstring& input)
{
    for (auto& c : input)
    {
        c = static_cast<wchar_t>(round(sqrt(pow(c, 2) / 2)));
    }
}

void cDecrypt::ReverseString(std::wstring& input)
{
    std::ranges::reverse(input);
}

void cDecrypt::UnStringLoLifier(std::wstring& input)
{
    std::wstring result = L"";

    for (int i = 0; i < input.length(); i++)
    {
        if (!(i % 2 == 0 && input[i] == L'L')) result += input[i];
    }

    input = result;
}

void cDecrypt::DeCircumferencesOfString(std::wstring& input)
{
    for (auto& c : input) c = static_cast<wchar_t>(round(c / std::_Pi));
}

void cDecrypt::BitReverser(std::wstring& input)
{
    for (auto& c : input)
    {
        auto binary = DecimalTo(c, 2);

        while (binary.length() < 16) binary.insert(0, L"0");

        std::ranges::reverse(binary);

        c = std::stoi(binary, nullptr, 2);
    }
}
