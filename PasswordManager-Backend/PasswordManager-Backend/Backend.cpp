// Main file
#include <iostream>
#include "Brain/EncryptorClass/EncryptorClass.h"

#define DLL _declspec(dllexport)

//Interactions with Python
extern "C" {
    DLL void Log(const char* ptr)
    {
        for (unsigned int i = 0; i < strlen(ptr); ++i)
        {
            std::cout << ptr[i];
        }
        std::cout << std::endl;
    }

    DLL bool CheckPass(const char* password)
    {
        std::cout << cEncryptor::EncryptString(password) << std::endl;
        return true;
    }
}