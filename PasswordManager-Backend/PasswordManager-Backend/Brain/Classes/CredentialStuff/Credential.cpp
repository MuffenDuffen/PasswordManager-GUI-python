#include "Credential.h"

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