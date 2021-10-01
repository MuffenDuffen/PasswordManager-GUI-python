#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();
    auto decr = new cDecryptor();

    std::wstring txt = L"LeessasdqwdasdawregsL";
    
    return 0;
}
