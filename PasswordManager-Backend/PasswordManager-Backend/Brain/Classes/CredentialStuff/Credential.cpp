#include "Credential.h"

#include <algorithm>

#include "../../Random/Random.h"

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

struct cCredentialStuff::cCredential
{
    std::wstring Name;
    std::wstring Email;
    std::wstring Password;

    cCredential(const std::wstring name, const std::wstring email, const std::wstring password)
    {
        Name = name;
        Email = email;
        Password = password;
    }
};
