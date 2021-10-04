#include "Credential.h"

#include <algorithm>
#include <iostream>

#include "../../Random/Random.h"
#include "../Encrypt_Decrypt/Encryptor.h"
#include "../Encrypt_Decrypt/Decryptor.h"

std::vector<unsigned long long> cCredentialStuff::GetEncryptionKey(const std::wstring master_password)
{
    const auto key = new std::vector<unsigned long long>();

    const auto baseRand = new cRandom(master_password.length());
    const auto rand0 = new cRandom(baseRand->Next() * master_password[0]);
    const auto rand1 = new cRandom(baseRand->Next() * master_password[1]);
    const auto rand2 = new cRandom(baseRand->Next() * master_password[2]);
    const auto rand3 = new cRandom(baseRand->Next() * master_password[3]);
    const auto rand4 = new cRandom(baseRand->Next() * master_password[4]);
    const auto rand5 = new cRandom(baseRand->Next() * master_password[5]);
    const auto rand6 = new cRandom(baseRand->Next() * master_password[6]);
    const auto rand7 = new cRandom(baseRand->Next() * master_password[7]);
    const auto rand8 = new cRandom(baseRand->Next() * master_password[8]);
    const auto rand9 = new cRandom(baseRand->Next() * master_password[9]);
    const auto rand10 = new cRandom(baseRand->Next() * master_password[10]);
    const auto rand11 = new cRandom(baseRand->Next() * master_password[11]);
    const auto rand12 = new cRandom(baseRand->Next() * master_password[12]);
    const auto rand13 = new cRandom(baseRand->Next() * master_password[13]);
    const auto rand14 = new cRandom(baseRand->Next() * master_password[14]);

    for (auto i = 0; i < baseRand->Next(16, 32); i++)
    {
        switch (baseRand->Next(15))
        {
    case 0:
        key->push_back(rand0->Next(12));
            break;
    case 1:
        key->push_back(rand1->Next(12));
            break;
    case 2:
        key->push_back(rand2->Next(12));
            break;
    case 3:
        key->push_back(rand3->Next(12));
            break;
    case 4:
        key->push_back(rand4->Next(12));
            break;
    case 5:
        key->push_back(rand5->Next(12));
            break;
    case 6:
        key->push_back(rand6->Next(12));
            break;
    case 7:
        key->push_back(rand7->Next(12));
            break;
    case 8:
        key->push_back(rand8->Next(12));
            break;
    case 9:
        key->push_back(rand9->Next(12));
            break;
    case 10:
        key->push_back(rand10->Next(12));
            break;
    case 11:
        key->push_back(rand11->Next(12));
            break;
    case 12:
        key->push_back(rand12->Next(12));
            break;
    case 13:
        key->push_back(rand13->Next(12));
            break;
    case 14:
        key->push_back(rand14->Next(12));
            break;
    default: ;
        }
    }
    
    return *key;
}

unsigned long long cCredentialStuff::GetShift(std::wstring master_password)
{
    const auto rand = new cRandom(master_password.length());

    return rand->Next(2, master_password.length());
}

std::wstring cCredentialStuff::GetPassPhrase(std::wstring master_password)
{
    std::ranges::reverse(master_password);
    auto lel = master_password;
    std::ranges::reverse(master_password);
    
    return lel;
}

cCredentialStuff::cCred cCredentialStuff::PythonCredToCpp(const std::wstring python_cred)
{
    auto cred = new cCred(L"", L"", L"");

    const int firstComma = python_cred.find(L',', 0);
    const int secondComma = python_cred.find(L',', firstComma+1);
    const int spacePos = python_cred.find(L' ', 0);
    
    const int nameLength = _wtoi(python_cred.substr(0, firstComma).c_str());
    const int emailLength = _wtoi(python_cred.substr(firstComma+1, secondComma).c_str());
    const int passwordLength = _wtoi(python_cred.substr(secondComma+1, spacePos).c_str());

    cred->Name = python_cred.substr(spacePos+1, nameLength);
    cred->Email = python_cred.substr(spacePos+nameLength+1, emailLength);
    cred->Password = python_cred.substr(spacePos+nameLength+emailLength+1);
    
    return *cred;
}

std::wstring cCredentialStuff::EncryptCppCred(const std::wstring cred_python, const std::vector<unsigned long long> key, const unsigned long long shift, std::wstring pass_phrase)
{
    const auto credFromPython = PythonCredToCpp(cred_python);
    const auto newCred = new cCred(L"", L"", L"");
    
    newCred->Name = cEncryptor::EncryptString(credFromPython.Name, key, shift, pass_phrase);
    newCred->Email = cEncryptor::EncryptString(credFromPython.Email, key, shift, pass_phrase);
    newCred->Password = cEncryptor::EncryptString(credFromPython.Password, key, shift, pass_phrase);

    auto encryptedCred = std::to_wstring(newCred->Name.length()) + L"," + std::to_wstring(newCred->Email.length()) + L"," + std::to_wstring(newCred->Password.length()) + L" " + newCred->Name + newCred->Email + newCred->Password;
    
    return encryptedCred;
}

std::wstring cCredentialStuff::DecryptCppCred(const std::wstring cred_python, const std::vector<unsigned long long> key, const unsigned long long shift, const std::wstring pass_phrase)
{
    const auto credFromPython = PythonCredToCpp(cred_python);
    const auto newCred = new cCred(L"", L"", L"");
    
    newCred->Name = cDecryptor::DecryptString(credFromPython.Name, key, shift, pass_phrase);
    newCred->Email = cDecryptor::DecryptString(credFromPython.Email, key, shift, pass_phrase);
    newCred->Password = cDecryptor::DecryptString(credFromPython.Password, key, shift, pass_phrase);

    auto encryptedCred = std::to_wstring(newCred->Name.length()) + L"," + std::to_wstring(newCred->Email.length()) + L"," + std::to_wstring(newCred->Password.length()) + L" " + newCred->Name + newCred->Email + newCred->Password;
    
    return encryptedCred;
}
