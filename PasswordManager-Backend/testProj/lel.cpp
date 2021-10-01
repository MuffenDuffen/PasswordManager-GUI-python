#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();
    auto decr = new cDecryptor();
    auto cred = new cCredentialStuff();

    std::wstring mPass = L"HahaIsakIsBad245";
    
    auto key = cred->GetEncryptionKey(mPass);
    auto shift = cred->GetShift(mPass);
    auto passPhrase = cred->GetPassPhrase(mPass);

    for (auto k : key)
    {
        std::cout << k << std::endl;
    }
    
    return 0;
}
