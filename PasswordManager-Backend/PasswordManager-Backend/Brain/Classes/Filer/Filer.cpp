#include "Filer.h"

#include <iostream>
#include <vector>
#include <fstream>

#include "../CredentialStuff/Credential.h"

void cFiler::CreateFile(const std::wstring name, const std::wstring master_password, const std::wstring email)
{
    const auto key = new std::vector<unsigned long long>{0,1,2,3,4,5,6,7,8,9,10,11};
    const auto shift = cCredentialStuff::GetShift(master_password);
    const auto passPhrase = cCredentialStuff::GetPassPhrase(master_password);

    const std::hash<std::wstring> hasher;

    const auto hashedMasterPassword = hasher(master_password);

    const auto lines = new std::vector<std::wstring>();

    lines->push_back(cEncryptor::EncryptString(name, *key, shift, passPhrase));
    lines->push_back(cEncryptor::EncryptString(std::to_wstring(hashedMasterPassword), *key, shift, passPhrase));
    lines->push_back(cEncryptor::EncryptString(email, *key, shift, passPhrase));

    const auto file = new std::wofstream("data.txt");

    for (auto l : *lines)
    {
        auto lcStr = l.c_str();

        file << lcStr;
    }
}
