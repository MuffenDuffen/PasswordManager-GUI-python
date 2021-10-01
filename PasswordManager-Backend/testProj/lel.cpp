#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();

    std::string txt = "LeL";

    enc->BitReverser(txt);
    
    std::cout << txt << std::endl;
    
    return 0;
}
