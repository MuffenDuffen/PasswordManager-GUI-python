#include "Encryptor.h"

#include "FuncClasses/Ceasarion.h"
#include "FuncClasses/Char.h"
#include "FuncClasses/InvertBits.h"
#include "FuncClasses/Latinize.h"

const char* cEncryptor::EncryptString(const std::string& input)
{
	return "LeL";
}

void cEncryptor::NextChar(std::string& input)
{
	cChar::NextChar(input);
}

void cEncryptor::InvertBits(std::string& input)
{
	cInvertBits::InvertBits(input);
}

std::string cEncryptor::LatinizerE(const std::string& input)
{
	return cLatinize::LatinizeE(input);
}

void cEncryptor::Ceasarion(std::string& input, const unsigned long long encrypt_shift)
{
	cCeasarion::CeasarionE(input, encrypt_shift);
}
