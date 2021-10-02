#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const auto enc = new cEncryptor();
    const auto decr = new cDecryptor();
    const auto cred = new cCredentialStuff();

    std::wstring mPass = L"HahaIsakIsBad245";
    
    const auto key = cred->GetEncryptionKey(mPass);
    const auto shift = cred->GetShift(mPass);
    const auto passPhrase = cred->GetPassPhrase(mPass);
    
    auto k = std::vector<unsigned long long>();

    k.push_back(3);
    
    auto i = enc->EncryptString(mPass, k, shift, passPhrase);
    
    return 0;
}
