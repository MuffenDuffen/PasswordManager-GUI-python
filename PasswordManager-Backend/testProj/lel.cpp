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

    const auto credStuff = new cCredentialStuff();

    const std::wstring mPass = L"HahaIsakIsBad245";

    const auto key = credStuff->GetEncryptionKey(mPass);
    const auto shift = credStuff->GetShift(mPass);
    const auto passPhrase = credStuff->GetPassPhrase(mPass);

    const auto k = new std::vector<unsigned long long>();

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

    const std::wstring name = L"Test";
    const std::wstring email = L"Test99480@gmail.com";
    const std::wstring password = L"TestPass123LeL";

    const auto simulatedPythonCred = std::to_wstring(name.length()) + L"," + std::to_wstring(email.length()) + L"," + std::to_wstring(password.length()) + L" " + name + email + password;
    
    return 0;
}
