// Main file
#include <iostream>

#define DLL _declspec(dllexport)

extern "C"
{
	DLL void Log(const char* ptr)
	{
		for (unsigned int i = 0; i < strlen(ptr); ++i)
		{
			std::cout << ptr[i];
		}
		std::cout << std::endl;
	}
}