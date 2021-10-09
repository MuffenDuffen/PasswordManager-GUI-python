#include "Filer.h"

#include <fstream>

#include "../ConversionStuff/Converter.h"
#include "../CredentialStuff/Credential.h"

void cFiler::SaveFile(const std::string& filename, const std::wstring& name, const std::wstring& email, const std::wstring& m_pass)
{
    const auto file = new std::wofstream(filename);

    const auto binaryLines = new std::vector<std::wstring>();

    binaryLines->push_back(cConverter::SToBin(name));
    binaryLines->push_back(cConverter::SToBin(email));
    binaryLines->push_back(cConverter::SToBin(m_pass));

    for (auto line : *binaryLines)
    {
        *file << line + L"\n";
    }

    file->close();
}
