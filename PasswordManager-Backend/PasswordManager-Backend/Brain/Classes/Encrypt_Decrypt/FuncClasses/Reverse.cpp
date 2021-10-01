#include "Reverse.h"

void cReverse::ReverseString(std::wstring& input)
{
    const int n = input.length();
    
    for (int i = 0; i < n / 2; i++)
        std::swap(input[i], input[n - i - 1]);
}
