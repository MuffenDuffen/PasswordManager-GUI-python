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

const char* cDecryptor::DecryptString(const std::string input)
{
    return cEncryptString::DeryptString(input);
}

void cDecryptor::PrevChar(std::string& input)
{
    return cChar::PrevChar(input);
}

void cDecryptor::InvertBits(std::string& input)
{
    return cInvertBits::InvertBits(input);
}

std::string cDecryptor::LatinizerD(const std::string input)
{
    return cLatinizer::LatinToString(input);
}

void cDecryptor::CeasarionD(std::string& input, const unsigned long long encrypt_shift)
{
    return cCeasarion::CeasarionD(input, encrypt_shift);
}

std::string cDecryptor::FromRomanNumeral(const std::string input)
{
    return cRns::RomanNumeralToString(input);
}

std::string cDecryptor::FromHex(const std::string input)
{
    return cHexStuff::FromHex(input);
}

void cDecryptor::CharRemover(const std::string& input, const std::string pass_phrase)
{
    return cCharAdder::CharRemover(input, pass_phrase);
}

void cDecryptor::PythagoranTheoremD(std::string& input)
{
    return cPythagoranTheorem::PythagoranTheoremD(input);
}

void cDecryptor::ReverseString(std::string& input)
{
    return cReverse::ReverseString(input);
}

std::string cDecryptor::LoLifierD(const std::string input)
{
    return cLoLifier::UnLoLifier(input);
}

void cDecryptor::CircD(const std::string& input)
{
    return cCirc::ReversedGetCircumferenceOfCharWithEntireText(input);
}

void cDecryptor::BitReverserD(std::string& input)
{
    return cBitReverser::BitReverserLeL(input);
}
