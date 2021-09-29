#include "../DecryptorClass.h"
#include "../../EncryptorClass/EncryptorClass.h"

void cDecryptor::PrevChar(std::string& input)
{
    for (auto& c : input)
    {
        c -= 1;
    }
}

void cDecryptor::InvertBits(std::string& input)
{
    cEncryptor::InvertBits(input);
}
