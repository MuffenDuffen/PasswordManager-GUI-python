#include <iostream>
#include <vector>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Filer/Filer.h"
#include "../PasswordManager-Backend/Brain/Classes/GenerationOfStuff/Generator.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const std::wstring mPass = L"HahaIsakIsBad245";

    const auto creds = new std::vector<cCredentialStuff::cCred>();

    creds->push_back(cCredentialStuff::cCred(L"testName", L"testEmail", L"testPasswordLeLOfDoom"));

    auto passDetails = new cGenerator::cPassDetails(mPass);

    const auto filer = new cFiler();

    filer->SaveFile("data.txt", L"Test", L"test99480@gmail.com", mPass, *creds, *passDetails);
    filer->ReadFile("data.txt", *passDetails);
    return 0;
}
