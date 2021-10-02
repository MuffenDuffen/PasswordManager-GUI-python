#pragma once
#include <string>

class cCharAdder
{
public:
    static void CharAdder(std::wstring& input, const std::wstring pass_phrase);
    static void CharRemover(const std::wstring& input, std::wstring pass_phrase);
};
