#include "../DecryptorClass.h"

void cDecryptor::PrevChar(std::string& input)
{
    for (auto& c : input)
    {
        c -= 1;
    }
}
