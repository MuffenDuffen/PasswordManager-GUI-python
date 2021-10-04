#pragma once
#include <string>
#include <vector>

#include "../Encrypt_Decrypt/Encryptor.h"

class cCredentialStuff
{
public:
    struct cCred
    {
        std::wstring Name;
        std::wstring Email;
        std::wstring Password;

        cCred(const std::wstring name, const std::wstring email, const std::wstring password)
        {
            Name = name;
            Email = email;
            Password = password;
        }
    };
    
    //Generation of stuff used for encryption/decryption
    DDLL static std::vector<unsigned long long> GetEncryptionKey(std::wstring master_password);
    DDLL static unsigned long long GetShift(std::wstring master_password);
    DDLL static std::wstring GetPassPhrase(std::wstring master_password);

    //ConversionStuff
    DDLL static cCred PythonCredToCpp(std::wstring python_cred);
    
    //Encrypt/Decrypt
    DDLL static std::wstring EncryptCppCred(const std::wstring cred_python, const std::vector<unsigned long long> key, const unsigned long long shift, std::wstring pass_phrase);
    DDLL static std::wstring DecryptCppCred(const std::wstring cred_python, const std::vector<unsigned long long> key, const unsigned long long shift, std::wstring);
};
