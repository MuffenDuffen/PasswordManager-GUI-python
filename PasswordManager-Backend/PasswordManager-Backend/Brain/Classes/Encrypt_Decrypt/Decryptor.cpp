#include "Decryptor.h"

#include "FuncClasses/BitReverser.h"
#include "FuncClasses/Ceasarion.h"
#include "FuncClasses/Char.h"
#include "FuncClasses/CharAdder.h"
#include "FuncClasses/Circ.h"
#include "FuncClasses/EncryptString.h"
#include "FuncClasses/HexStuff.h"
#include "FuncClasses/InvertBits.h"
#include "FuncClasses/Latinizer.h"
#include "FuncClasses/LoLifier.h"
#include "FuncClasses/PythagoranTheorem.h"
#include "FuncClasses/Reverse.h"
#include "FuncClasses/RNS.h"

std::wstring cDecryptor::DecryptString(const std::wstring input, const std::vector<unsigned long long> key,
                                       const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    return cEncryptString::DeryptString(input, key, encrypt_shift, pass_phrase);
}

void cDecryptor::PrevChar(std::wstring& input)
{
    return cChar::PrevChar(input);
}

void cDecryptor::InvertBits(std::wstring& input)
{
    return cInvertBits::InvertBits(input);
}

std::wstring cDecryptor::LatinizerD(const std::wstring input)
{
    return cLatinizer::LatinToString(input);
}

void cDecryptor::CeasarionD(std::wstring& input, const unsigned long long encrypt_shift)
{
    return cCeasarion::CeasarionD(input, encrypt_shift);
}

std::wstring cDecryptor::FromRomanNumeral(const std::wstring input)
{
    return cRns::RomanNumeralToString(input);
}

std::wstring cDecryptor::FromHex(const std::wstring input)
{
    return cHexStuff::FromHex(input);
}

void cDecryptor::CharRemover(const std::wstring& input, const std::wstring pass_phrase)
{
    return cCharAdder::CharRemover(input, pass_phrase);
}

void cDecryptor::PythagoranTheoremD(std::wstring& input)
{
    return cPythagoranTheorem::PythagoranTheoremD(input);
}

void cDecryptor::ReverseString(std::wstring& input)
{
    return cReverse::ReverseString(input);
}

std::wstring cDecryptor::LoLifierD(const std::wstring input)
{
    return cLoLifier::UnLoLifier(input);
}

void cDecryptor::CircD(const std::wstring& input)
{
    return cCirc::ReversedGetCircumferenceOfCharWithEntireText(input);
}

void cDecryptor::BitReverserD(std::wstring& input)
{
    return cBitReverser::BitReverserLeL(input);
}
