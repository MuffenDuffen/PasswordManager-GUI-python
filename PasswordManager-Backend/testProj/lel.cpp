#include <iostream>
#include <vector>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Filer/Filer.h"
#include "../PasswordManager-Backend/Brain/Classes/GenerationOfStuff/Generator.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const std::wstring mPass = L"HahaIsakIsBad245";
    auto passDetails = new cGenerator::cPassDetails(mPass);

    const auto creds = new std::vector<cCredentialStuff::cCred>();

    creds->push_back(cCredentialStuff::cCred(L"testName1", L"testEmail1", L"testPasswordLeLOfDoomLeL1"));
    creds->push_back(cCredentialStuff::cCred(L"testName2", L"testEmail2", L"testPasswordLeLOfDoomLeL2"));
    creds->push_back(cCredentialStuff::cCred(L"testName3", L"testEmail3", L"testPasswordLeLOfDoomLeL3"));
    creds->push_back(cCredentialStuff::cCred(L"testName4", L"testEmail4", L"testPasswordLeLOfDoomLeL4"));
    creds->push_back(cCredentialStuff::cCred(L"testName5", L"testEmail5", L"testPasswordLeLOfDoomLeL5"));


    const auto filer = new cFiler();

    filer->SaveFile("data.txt", L"Test", L"test99480@gmail.com", mPass, *creds, *passDetails);

    auto credsFromFile = new std::vector<std::wstring>();

    filer->ReadFile("data.txt", *passDetails, *credsFromFile);

    for (auto c : *credsFromFile)
    {
        std::wcout << c << std::endl;
    }

    return 0;
}
