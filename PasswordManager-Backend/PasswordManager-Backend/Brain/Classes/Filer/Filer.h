#pragma once
#include "../CredentialStuff/Credential.h"
#include "../Encrypt_Decrypt/Encryptor.h"
#include "../GenerationOfStuff/Generator.h"

class cFiler
{
public:
    DDLL static void SaveFile(const std::string& filename, const std::wstring& name, const std::wstring& email, const std::wstring& m_pass, std::
                              vector<cCredentialStuff::cCred>& creds, const cGenerator::cPassDetails& pass_details);
    DDLL static void ReadFile(const std::string& filename, const cGenerator::cPassDetails& pass_details, std::vector<std::wstring>& cred);
};
