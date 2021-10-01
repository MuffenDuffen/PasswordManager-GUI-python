#pragma once
#include <string>

class cCirc
{
public:
    static void GetCircumferenceOfCharWithEntireText(const std::wstring& input);
    static void ReversedGetCircumferenceOfCharWithEntireText(const std::wstring& input);
    
    static char GetCircumferenceOfChar(char c);
    static char ReversedGetCircumferenceOfChar(char c);
};
