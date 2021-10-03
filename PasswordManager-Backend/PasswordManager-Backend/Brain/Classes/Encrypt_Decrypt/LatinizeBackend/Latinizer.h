#pragma once
#include <string>

#include "../Encryptor.h"

class cLatinizer
{
public:
    DDLL static std::wstring StringToLatin(std::wstring input);
    DDLL static std::wstring LatinToString(std::wstring input);
};
