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

    auto k = new std::vector<unsigned long long>();

    k->push_back(0);
    k->push_back(1);
    k->push_back(2);
    k->push_back(3);
    k->push_back(4);
    k->push_back(5);
    k->push_back(6);
    k->push_back(7);
    k->push_back(8);
    k->push_back(9);
    k->push_back(10);
    k->push_back(11);
    
    const std::wstring e = enc->EncryptString(mPass, *k, shift, passPhrase);
    
    const std::wstring d = decr->DecryptString(e, *k, shift, passPhrase);
    
    return 0;
}
