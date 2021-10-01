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

const char* cEncryptor::EncryptString(const std::string input)
{
    return cEncryptString::EncryptString(input);
}

void cEncryptor::NextChar(std::string& input)
{
    return cChar::NextChar(input);
}

void cEncryptor::InvertBits(std::string& input)
{
    return cInvertBits::InvertBits(input);
}

std::string cEncryptor::Latinizer(const std::string input)
{
    return cLatinizer::StringToLatin(input);
}

void cEncryptor::Ceasarion(std::string& input, const unsigned long long encrypt_shift)
{
    return cCeasarion::CeasarionE(input, encrypt_shift);
}

std::string cEncryptor::ToRomanNumeral(const std::string input)
{
    return cRns::StringToRomanNumeral(input);
}

std::string cEncryptor::ToHex(const std::string input)
{
    return cHexStuff::ToHex(input);
}

void cEncryptor::CharAdder(const std::string& input, const std::string pass_phrase)
{
    return cCharAdder::CharAdder(input, pass_phrase);
}

void cEncryptor::PythagoranTheoremE(std::string& input)
{
    return cPythagoranTheorem::PythagoranTheoremE(input);
}

void cEncryptor::ReverseString(std::string& input)
{
    return cReverse::ReverseString(input);
}

std::string cEncryptor::LoLifier(const std::string input)
{
    return cLoLifier::LoLifier(input);
}

void cEncryptor::Circ(const std::string& input)
{
    return cCirc::GetCircumferenceOfCharWithEntireText(input);
}

void cEncryptor::BitReverser(std::string& input)
{
    return cBitReverser::BitReverserLeL(input);
}
