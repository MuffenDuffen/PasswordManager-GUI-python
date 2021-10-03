#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Encryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/HexStuffBackend/HexStuff.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();
    auto dec = new cDecryptor();
    
    auto credStuff = new cCredentialStuff();

    std::wstring mPass = L"HahaIsakIsBad245";

    const auto key = credStuff->GetEncryptionKey(mPass);
    const auto shift = credStuff->GetShift(mPass);
    const auto passPhrase = credStuff->GetPassPhrase(mPass);

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
    
    const std::wstring txt = L"eager";

    const auto e = enc->EncryptString(txt, *k, shift, passPhrase);

    auto d = dec->DecryptString(e, *k, shift, passPhrase);
    
    return 0;
}
