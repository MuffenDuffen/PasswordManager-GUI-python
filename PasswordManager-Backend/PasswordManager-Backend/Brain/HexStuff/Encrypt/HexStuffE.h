#pragma once
#include <string>

int ToDecimal(std::string number, int base);
char SingleDigitPreprocees(int n);
std::string DecimalTo(int decimal, int base = 16);

std::string StringToHex(const std::string& input);
