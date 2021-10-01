#pragma once
#include <map>
#include <string>
#include <vector>

inline std::vector<std::string> Split(std::string str, const std::string token)
{
    std::vector<std::string> result;
    while (str.size())
    {
        if (const int index = str.find(token); index != std::string::npos)
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

inline std::string IntToLatin(const int number)
{
    auto numberString = std::to_string(number);

    auto ones = new std::map<std::string, std::string>{
        {"1", "Unos"},
        {"2", "Duo"},
        {"3", "Tres"},
        {"4", "Quattuor"},
        {"5", "Quinque"},
        {"6", "Sex"},
        {"7", "Septem"},
        {"8", "Octo"},
        {"9", "Novem"}
    };
    auto tens = new std::map<std::string, std::string>{
        {"1", "Decem"},
        {"2", "Viginti"},
        {"3", "Traginta"},
        {"4", "Quadraginta"},
        {"5", "Quinquaginta"},
        {"6", "Sexaginta"},
        {"7", "Septuaginta"},
        {"8", "Octoginta"},
        {"9", "Nonaginta"}
    };
    auto hundreds = new std::map<std::string, std::string>{
        {"1", "Centum"},
        {"2", "Ducenti"},
        {"3", "Trecenti"},
        {"4", "Quadrigenti"},
        {"5", "Quingenti"},
        {"6", "Sescenti"},
        {"7", "Septigenti"},
        {"8", "Octingenti"},
        {"9", "Nongenti"}
    };
    auto thousands = new std::map<std::string, std::string>{
        {"1", "Mille"},
        {"2", "Duo Mille"},
        {"3", "Tres Mille"},
        {"4", "Quattuor Mille"},
        {"5", "Quinque Milia"},
        {"6", "Sex Milia"},
        {"7", "Septem Milia"},
        {"8", "Octo Milia"},
        {"9", "Novem Milia"},
    };
    auto tenthousands = new std::map<std::string, std::string>{
        {"1", "Decem Milia"},
        {"2", "Viginti Milia"},
        {"3", "Triginta Milia"},
        {"4", "Quadraginta Milia"},
        {"5", "Quinquaginta Milia"},
        {"6", "Sexaginta Milia"},
        {"7", "Septuaginta Milia"},
        {"8", "Octoginta Milia"},
        {"9", "Nonaginta Milia"},
    };
    auto hundredThousands = new std::map<std::string, std::string>{
        {"1", "Centum Milia"},
        {"2", "Ducenti Milia"},
        {"3", "Trecenti Milia"},
        {"4", "Quadragenti Milia"},
        {"5", "Quingenti Milia"},
        {"6", "Sescenti Milia"},
        {"7", "Septingenti Milia"},
        {"8", "Octingenti Milia"},
        {"9", "Nongenti Milia"}
    };

    std::vector<std::map<std::string, std::string>> dictionaries;
    dictionaries.push_back(*hundredThousands);
    dictionaries.push_back(*tenthousands);
    dictionaries.push_back(*thousands);
    dictionaries.push_back(*hundreds);
    dictionaries.push_back(*tens);
    dictionaries.push_back(*ones);

    std::string latin = "";

    while (numberString.length() < 6) numberString = numberString.insert(0, "0");

    for (int i = 0; i < numberString.length(); i++)
    {
        std::string stringifier(1, numberString[i]);

        if (numberString[i] != '0')
        {
            latin += dictionaries[i].at(stringifier) + ", ";
        }
    }

    latin = latin.substr(0, latin.length() - 2);

    return latin;
}

inline int LatinToNumber(const std::string input)
{
    const auto theMapOfDoom = new std::map<std::string, int>{
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

    for (const auto numsInLatin = Split(input, ", "); auto s : numsInLatin)
    {
        result += theMapOfDoom->at(s);
    }

    return result;
}