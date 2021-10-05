#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Encryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/HexStuffBackend/HexStuff.h"
#include "../PasswordManager-Backend/Brain/Classes/Filer/Filer.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();
    auto dec = new cDecryptor();

    const auto filer = new cFiler();

    const std::wstring mPass = L"HahaIsakIsBad245";

    filer->CreateFile(L"TestName", mPass, L"Test99480@gmail.com");
    
    return 0;
}
