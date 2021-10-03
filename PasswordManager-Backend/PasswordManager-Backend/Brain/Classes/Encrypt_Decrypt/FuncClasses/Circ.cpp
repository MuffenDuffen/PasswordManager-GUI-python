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

wchar_t cCirc::GetCircumferenceOfChar(const wchar_t c)
{
    return static_cast<wchar_t>(round(c * std::_Pi));
}

wchar_t cCirc::ReversedGetCircumferenceOfChar(const wchar_t c)
{
    return static_cast<wchar_t>(round(c / std::_Pi));
}
