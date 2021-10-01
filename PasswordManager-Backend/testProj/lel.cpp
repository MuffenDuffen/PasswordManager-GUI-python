#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();

    const std::string txt = "LeL";
    
    return 0;
}
