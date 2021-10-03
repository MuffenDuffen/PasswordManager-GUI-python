#pragma once
#include <string>

#include "../Encryptor.h"

class cRns
{
public:
    DDLL static std::wstring StringToRomanNumeral(std::wstring input);
    DDLL static std::wstring RomanNumeralToString(std::wstring input);
};
