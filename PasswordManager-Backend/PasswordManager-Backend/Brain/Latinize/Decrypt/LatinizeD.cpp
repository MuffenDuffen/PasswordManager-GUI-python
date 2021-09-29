#include "LatinizeD.h"

std::vector<std::string> Split(std::string str, std::string token)
{
    std::vector<std::string> result;
    while (str.size())
    {
        const int index = str.find(token);
        if (index != std::string::npos)
        {
            result.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0)result.push_back(str);
        }
        else
        {
            result.push_back(str);
            str = "";
        }
    }
    return result;
}

std::string LatinToString(std::string input)
{
    const auto strings = Split(input, " , ");

    std::string result = "";
    
    for (const auto s : strings)
    {
        result += static_cast<char>(LatinToNumber(s));
    }
    
    return result;
}

int LatinToNumber(const std::string input)
{
    const auto theMapOfDoom = new std::map<std::string, int>
    {
        {"Unos", 1},
        {"Duo", 2},
        {"Tres", 3},
        {"Quattuor", 4},
        {"Quinque", 5},
        {"Sex", 6},
        {"Septem", 7},
        {"Octo", 8},
        {"Novem", 9},
        {"Decem", 10},
        {"Viginti", 20},
        {"Traginta", 30},
        {"Quadraginta", 40},
        {"Quinquaginta", 50},
        {"Sexaginta", 60},
        {"Septuaginta", 70},
        {"Octoginta", 80},
        {"Nonaginta", 90},
        {"Centum", 100},
        {"Ducenti", 200},
        {"Trecenti", 300},
        {"Quadrigenti", 400},
        {"Quingenti", 500},
        {"Sescenti", 600},
        {"Septigenti", 700},
        {"Octingenti", 800},
        {"Nongenti", 900},
        {"Mille", 1000},
        {"Duo Mille", 2000},
        {"Tres Mille", 3000},
        {"Quattuor Mille", 4000},
        {"Quinque Milia", 5000},
        {"Sex Milia", 6000},
        {"Septem Milia", 7000},
        {"Octo Milia", 8000},
        {"Novem Milia", 9000},
        {"Decem Milia", 10000},
        {"Viginti Milia", 20000},
        {"Triginta Milia", 30000},
        {"Quadraginta Milia", 40000},
        {"Quinquaginta Milia", 50000},
        {"Sexaginta Milia", 60000},
        {"Septuaginta Milia", 70000},
        {"Octoginta Milia", 80000},
        {"Nonaginta Milia", 90000},
        {"Centum Milia", 100000},
        {"Ducenti Milia", 200000},
        {"Trecenti Milia", 300000},
        {"Quadragenti Milia", 400000},
        {"Quingenti Milia", 500000},
        {"Sescenti Milia", 600000},
        {"Septingenti Milia", 700000},
        {"Octingenti Milia", 800000},
        {"Nongenti Milia", 900000}
    };
    
    int result = 0;

    const auto numsInLatin = Split(input, ", ");

    for (auto s : numsInLatin)
    {
        result += theMapOfDoom->at(s);
    }
    
    return result;
}
