#pragma once
#include <string>
#include <vector>

#include "../CredentialStuff/Credential.h"


class cGenerator
{
public:
    struct cPassDetails
    {
        std::vector<unsigned long long> Key;
        unsigned long long Shift;
        std::wstring Pass_Phrase;

        explicit cPassDetails(const std::wstring& master_password)
        {
            Key = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
            Shift = cCredentialStuff::GetShift(master_password);
            Pass_Phrase = cCredentialStuff::GetPassPhrase(master_password);
        }
    };

    void* generatePassDetails(const std::wstring& master_password);
};
