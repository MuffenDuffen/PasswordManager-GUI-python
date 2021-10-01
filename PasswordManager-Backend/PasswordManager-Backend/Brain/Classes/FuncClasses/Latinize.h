#pragma once
#include <string>
#include <map>
#include <vector>

class cLatinize
{
public:
    static std::string LatinizeE(const std::string& word);
    static std::string NumberToLatin(int number);
    
    static std::string LatinizerD(const std::string& input);
    static std::vector<std::string> Split(std::string str, std::string token);
    static int LatinToNumber(const std::string input);
};
