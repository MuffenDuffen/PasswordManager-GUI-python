#include <iostream>

#include "../PasswordManager-Backend/Brain/Classes/CredentialStuff/Credential.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Decryptor.h"
#include "../PasswordManager-Backend/Brain/Classes/Encrypt_Decrypt/Encryptor.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    const auto enc = new cEncryptor();
    const auto decr = new cDecryptor();
    const auto cred = new cCredentialStuff();

    std::wstring mPass = L"HahaIsakIsBad245";
    
    const auto key = cred->GetEncryptionKey(mPass);
    const auto shift = cred->GetShift(mPass);
    const auto passPhrase = cred->GetPassPhrase(mPass);

    std::wstring txt = L"LeL";
    
    enc->NextChar(txt);
    enc->InvertBits(txt);
    txt = enc->Latinizer(txt);
    enc->Ceasarion(txt, shift);
    txt = enc->ToRomanNumeral(txt);
    txt = enc->ToHex(txt);
    enc->CharAdder(txt, passPhrase);
    enc->PythagoranTheoremE(txt);
    enc->ReverseString(txt);
    txt = enc->LoLifier(txt);
    enc->Circ(txt);
    enc->BitReverser(txt);
    
    return 0;
}
