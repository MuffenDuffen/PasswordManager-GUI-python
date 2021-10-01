#pragma once
#include <string>

class cHexStuff
{
public:
    static std::wstring ToHex(std::wstring input);
    static std::wstring FromHex(std::wstring input);
};
