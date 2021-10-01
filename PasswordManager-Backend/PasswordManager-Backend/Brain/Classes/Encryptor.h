#pragma once
#include <string>

class cEncryptor
{
public:
	//Encrypt String
	static const char* EncryptString(const std::string& input);

	///Encryption Methods
	void NextChar(std::string& input);
	void InvertBits(std::string& input);
	std::string LatinizerE(const std::string& input);
	void Ceasarion(std::string& input, unsigned long long encrypt_shift);
	//RomanNumeralStuff
	//HexStuff
	void CharAdder(std::string& input, const std::string& pass_phrase);
	//PythagoranTheorem
	void ReverseString(std::string& input);
	//Expander
	//Circumference
	//BitReverser
};

