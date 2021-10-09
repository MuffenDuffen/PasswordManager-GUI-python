#include <iostream>
#include <vector>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Filer/Filer.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const std::wstring mPass = L"HahaIsakIsBad245";

    const auto key = new std::vector<unsigned long long>{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    const auto shift = cCredentialStuff::GetShift(mPass);
    const auto passPhrase = cCredentialStuff::GetPassPhrase(mPass);
    const auto creds = new std::vector<cCredentialStuff::cCred>();

    const auto filer = new cFiler();

    filer->SaveFile("data.txt", L"Test", L"test99480@gmail.com", mPass);

    return 0;
}
