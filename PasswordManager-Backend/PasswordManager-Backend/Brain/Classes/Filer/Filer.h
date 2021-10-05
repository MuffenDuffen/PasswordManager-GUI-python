#pragma once
#include "../Encrypt_Decrypt/Encryptor.h"

class cFiler
{
public:
    DDLL static void CreateFile(std::wstring name, std::wstring master_password, std::wstring email);
};
