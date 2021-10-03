#pragma once
#include <string>

#include "../Encryptor.h"

class cHexStuff
{
public:
    DDLL static std::wstring ToHex(std::wstring input);
    DDLL static std::wstring FromHex(std::wstring input);
};
