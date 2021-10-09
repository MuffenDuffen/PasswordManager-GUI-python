#include "Filer.h"

#include <fstream>
#include <iostream>
#include <sstream>

#include "../ConversionStuff/Converter.h"

void cFiler::SaveFile(const std::string& filename, const std::wstring& name, const std::wstring& email, const std::wstring& m_pass, std::vector<cCredentialStuff::cCred>& creds, const cGenerator::cPassDetails& pass_details)
{
    const auto file = new std::wofstream(filename);

    const auto binaryLines = new std::vector<std::wstring>();

    binaryLines->push_back(cConverter::SToBin(cEncryptor::EncryptString(name, pass_details.Key, pass_details.Shift, pass_details.Pass_Phrase)));
    binaryLines->push_back(cConverter::SToBin(cEncryptor::EncryptString(email, pass_details.Key, pass_details.Shift, pass_details.Pass_Phrase)));
    binaryLines->push_back(cConverter::SToBin(cEncryptor::EncryptString(m_pass, pass_details.Key, pass_details.Shift, pass_details.Pass_Phrase)));

    for (auto line : *binaryLines)
    {
        *file << line + L"\n";
    }

    for (const auto cred : creds)
    {
        *file << cConverter::SToBin(cCredentialStuff::EncryptCppCred(cCredentialStuff::CppCredToPython(cred), pass_details.Key, pass_details.Shift, pass_details.Pass_Phrase)) + L"\n";
    }

    file->close();
}

void cFiler::ReadFile(const std::string& filename, const cGenerator::cPassDetails& pass_details, std::vector<std::wstring>& cred)
{
    const auto file = new std::ifstream(filename);

    auto line = new std::string;
    const auto lines = new std::vector<std::string>();

    while (std::getline(*file, *line)) lines->push_back(*line);

    const auto decodedLines = new std::vector<std::wstring>();

    for (auto binaryLine : *lines)
    {
        std::wstring result = L"";

        auto iss = new std::stringstream(binaryLine);

        while (*iss)
        {
            std::string subs = "";

            *iss >> subs;

            if (subs.empty()) break;

            result += static_cast<wchar_t>(std::stoi(subs.c_str(), nullptr, 2));
        }

        decodedLines->push_back(result);
    }

    for (int i = 3; i < decodedLines->size(); i++)
    {
        auto lel = std::wstring(cCredentialStuff::DecryptCppCred(decodedLines->at(i), pass_details.Key, pass_details.Shift, pass_details.Pass_Phrase));

        cred.push_back(lel);
    }
}