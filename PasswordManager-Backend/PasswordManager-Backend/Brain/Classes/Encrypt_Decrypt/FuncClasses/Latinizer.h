#pragma once
#include <string>

class cLatinizer
{
public:
    static std::wstring StringToLatin(std::wstring input);
    static std::wstring LatinToString(std::wstring input);
};
