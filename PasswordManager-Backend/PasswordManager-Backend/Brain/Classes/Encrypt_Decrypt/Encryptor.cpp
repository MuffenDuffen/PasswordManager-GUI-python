#include "Encryptor.h"

#include "FuncClasses/BitReverser.h"
#include "LatinizeBackend/lBackend.h"
#include "FuncClasses/Ceasarion.h"
#include "FuncClasses/Char.h"
#include "FuncClasses/CharAdder.h"
#include "FuncClasses/Circ.h"
#include "FuncClasses/EncryptString.h"
#include "FuncClasses/InvertBits.h"
#include "FuncClasses/Latinizer.h"
#include "FuncClasses/RNS.h"
#include "FuncClasses/HexStuff.h"
#include "FuncClasses/LoLifier.h"
#include "FuncClasses/PythagoranTheorem.h"
#include "FuncClasses/Reverse.h"

std::wstring cEncryptor::EncryptString(const std::wstring input, const std::vector<unsigned long long> key,
                                       const unsigned long long encrypt_shift, const std::wstring pass_phrase)
{
    return cEncryptString::EncryptString(input, key, encrypt_shift, pass_phrase);
}

void cEncryptor::NextChar(std::wstring& input)
{
    return cChar::NextChar(input);
}

void cEncryptor::InvertBits(std::wstring& input)
{
    return cInvertBits::InvertBits(input);
}

std::wstring cEncryptor::Latinizer(const std::wstring input)
{
    return cLatinizer::StringToLatin(input);
}

void cEncryptor::Ceasarion(std::wstring& input, const unsigned long long encrypt_shift)
{
    return cCeasarion::CeasarionE(input, encrypt_shift);
}

std::wstring cEncryptor::ToRomanNumeral(const std::wstring input)
{
    return cRns::StringToRomanNumeral(input);
}

std::wstring cEncryptor::ToHex(const std::wstring input)
{
    return cHexStuff::ToHex(input);
}

void cEncryptor::CharAdder(std::wstring& input, const std::wstring pass_phrase)
{
    return cCharAdder::CharAdder(input, pass_phrase);
}

void cEncryptor::PythagoranTheoremE(std::wstring& input)
{
    return cPythagoranTheorem::PythagoranTheoremE(input);
}

void cEncryptor::ReverseString(std::wstring& input)
{
    return cReverse::ReverseString(input);
}

std::wstring cEncryptor::LoLifier(const std::wstring input)
{
    return cLoLifier::LoLifier(input);
}

void cEncryptor::Circ(const std::wstring& input)
{
    return cCirc::GetCircumferenceOfCharWithEntireText(input);
}

void cEncryptor::BitReverser(std::wstring& input)
{
    return cBitReverser::BitReverserLeL(input);
}
