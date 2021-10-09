#pragma once
#include "../CredentialStuff/Credential.h"
#include "../Encrypt_Decrypt/Encryptor.h"

class cFiler
{
public:
    DDLL static void SaveFile(const std::string& filename, const std::wstring& name, const std::wstring& email, const std::wstring& m_pass);
};
