#pragma once
#include <string>

class cEncryptString
{
public:
    static const char* EncryptString(std::wstring input);
    static const char* DeryptString(std::wstring input);
};
