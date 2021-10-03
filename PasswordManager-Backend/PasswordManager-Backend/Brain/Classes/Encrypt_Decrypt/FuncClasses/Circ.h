#pragma once
#include <string>

class cCirc
{
public:
    static void GetCircumferenceOfCharWithEntireText(const std::wstring& input);
    static void ReversedGetCircumferenceOfCharWithEntireText(const std::wstring& input);
    
    static wchar_t GetCircumferenceOfChar(const wchar_t c);
    static wchar_t ReversedGetCircumferenceOfChar(const wchar_t c);
};
