#include "Circ.h"

#include <cmath>
#include <random>

void cCirc::GetCircumferenceOfCharWithEntireText(const std::wstring& input)
{
    for (auto c : input) c = GetCircumferenceOfChar(c);
}

void cCirc::ReversedGetCircumferenceOfCharWithEntireText(const std::wstring& input)
{
    for (auto c : input) c = ReversedGetCircumferenceOfChar(c);
}

char cCirc::GetCircumferenceOfChar(const char c)
{
    return static_cast<char>(round(c * std::_Pi));
}

char cCirc::ReversedGetCircumferenceOfChar(const char c)
{
    return static_cast<char>(round(c / std::_Pi));
}
