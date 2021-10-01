#pragma once
#include <string>

class cEncryptString
{
public:
    static const char* EncryptString(std::string input);
    static const char* DeryptString(std::string input);
};
