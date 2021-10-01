#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/Encryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/FuncClasses/Latinize.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    auto enc = new cEncryptor();

    std::string lel = enc->LatinizerE("124");

    std::cout << lel << std::endl;
    
    return 0;
}
