// Main file
#include <iostream>
#include "Brain/Classes/Encryptor.h"

#define DLL _declspec(dllexport)

//Interactions with Python
extern "C" {
	DLL void Log(const char* ptr)
	{
		for (unsigned int i = 0; i < strlen(ptr); ++i)
		{
			std::cout << ptr[i];
		}
		std::cout << std::endl;
	}

	DLL bool CheckPass(const char* password)
	{
		std::cout << cEncryptor::EncryptString(password) << std::endl;
		return true;
	}

	DLL const char* GetCredentials()
	{
		const char* result = new const char[12]("L\x1fo\x1fL\x1dL\x1fo\x1fL");
		return result;
	}

	DLL void Free(const void* ptr, int type)
	{
		std::cout << "Deleting object at " << ptr << std::endl;

		switch (type)
		{
		case 0: 
			delete[] static_cast<const char*>(ptr);
			break;
		case 1: 
			delete[] static_cast<const int*>(ptr);
			break;
		}
	}
}
