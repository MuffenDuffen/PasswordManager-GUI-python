#pragma once
#include <string>
#include <vector>

#include "../Encrypt_Decrypt/Encryptor.h"

class cCredentialStuff
{
public:
    //Generation of stuff used for encryption/decryption
    DDLL static std::vector<unsigned long long> GetEncryptionKey(std::wstring master_password);
    DDLL static unsigned long long GetShift(std::wstring master_password);
    DDLL static std::wstring GetPassPhrase(std::wstring master_password);

    
};
