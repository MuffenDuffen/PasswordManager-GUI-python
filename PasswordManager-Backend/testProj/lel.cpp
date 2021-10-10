#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../PasswordManager-Backend/Brain/Classes/Filer/Filer.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const auto filePath = "data.txt";

    const std::fstream file(filePath);

    if (!file.is_open())
    {
        std::string name = "";
        std::string email = "";
        std::string mPass = "";

        std::getline(std::cin, name);
        std::getline(std::cin, email);
        std::getline(std::cin, mPass);

        const auto passDetails = cGenerator::cPassDetails(std::wstring(mPass.begin(), mPass.end()));
        auto creds = new std::vector<cCredentialStuff::cCred>();

        cFiler::SaveFile("data.txt", std::wstring(name.begin(), name.end()), std::wstring(email.begin(), email.end()), std::wstring(mPass.begin(), mPass.end()), *creds, passDetails);
    }
    else
    {
        
    }
    return 0;
}
