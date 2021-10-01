#include "Encryptor.h"

#include "../LatinizeBackend/lBackend.h"
#include "FuncClasses/Ceasarion.h"
#include "FuncClasses/Char.h"
#include "FuncClasses/EncryptString.h"
#include "FuncClasses/InvertBits.h"
#include "FuncClasses/Latinizer.h"

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
