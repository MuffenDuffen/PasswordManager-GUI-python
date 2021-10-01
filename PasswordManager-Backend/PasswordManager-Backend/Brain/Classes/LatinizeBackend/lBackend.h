#pragma once
#include <map>
#include <string>
#include <vector>

inline std::vector<std::wstring> Split(std::wstring str, const std::wstring token)
{
    std::vector<std::wstring> result;
    while (str.size())
    {
        if (const int index = str.find(token); index != std::wstring::npos)
        {
            result.push_back(str.substr(0, index));
            str = str.substr(index + token.size());
            if (str.size() == 0)result.push_back(str);
        }
        else
        {
            result.push_back(str);

            str = L"";
        }
    }
    return result;
}

inline std::wstring IntToLatin(const int number)
{
    auto numberString = std::to_string(number);

    auto ones = new std::map<std::wstring, std::wstring>{
        {L"1", L"Unos"},
        {L"2", L"Duo"},
        {L"3", L"Tres"},
        {L"4", L"Quattuor"},
        {L"5", L"Quinque"},
        {L"6", L"Sex"},
        {L"7", L"Septem"},
        {L"8", L"Octo"},
        {L"9", L"Novem"}
    };
    auto tens = new std::map<std::wstring, std::wstring>{
        {L"1", L"Decem"},
        {L"2", L"Viginti"},
        {L"3", L"Traginta"},
        {L"4", L"Quadraginta"},
        {L"5", L"Quinquaginta"},
        {L"6", L"Sexaginta"},
        {L"7", L"Septuaginta"},
        {L"8", L"Octoginta"},
        {L"9", L"Nonaginta"}
    };
    auto hundreds = new std::map<std::wstring, std::wstring>{
        {L"1", L"Centum"},
        {L"2", L"Ducenti"},
        {L"3", L"Trecenti"},
        {L"4", L"Quadrigenti"},
        {L"5", L"Quingenti"},
        {L"6", L"Sescenti"},
        {L"7", L"Septigenti"},
        {L"8", L"Octingenti"},
        {L"9", L"Nongenti"}
    };
    auto thousands = new std::map<std::wstring, std::wstring>{
        {L"1", L"Mille"},
        {L"2", L"Duo Mille"},
        {L"3", L"Tres Mille"},
        {L"4", L"Quattuor Mille"},
        {L"5", L"Quinque Milia"},
        {L"6", L"Sex Milia"},
        {L"7", L"Septem Milia"},
        {L"8", L"Octo Milia"},
        {L"9", L"Novem Milia"},
    };
    auto tenthousands = new std::map<std::wstring, std::wstring>{
        {L"1", L"Decem Milia"},
        {L"2", L"Viginti Milia"},
        {L"3", L"Triginta Milia"},
        {L"4", L"Quadraginta Milia"},
        {L"5", L"Quinquaginta Milia"},
        {L"6", L"Sexaginta Milia"},
        {L"7", L"Septuaginta Milia"},
        {L"8", L"Octoginta Milia"},
        {L"9", L"Nonaginta Milia"},
    };
    auto hundredThousands = new std::map<std::wstring, std::wstring>{
        {L"1", L"Centum Milia"},
        {L"2", L"Ducenti Milia"},
        {L"3", L"Trecenti Milia"},
        {L"4", L"Quadragenti Milia"},
        {L"5", L"Quingenti Milia"},
        {L"6", L"Sescenti Milia"},
        {L"7", L"Septingenti Milia"},
        {L"8", L"Octingenti Milia"},
        {L"9", L"Nongenti Milia"}
    };

    std::vector<std::map<std::wstring, std::wstring>> dictionaries;
    dictionaries.push_back(*hundredThousands);
    dictionaries.push_back(*tenthousands);
    dictionaries.push_back(*thousands);
    dictionaries.push_back(*hundreds);
    dictionaries.push_back(*tens);
    dictionaries.push_back(*ones);

    std::wstring latin = L"";

    while (numberString.length() < 6) numberString = numberString.insert(0, "0");

    for (int i = 0; i < numberString.length(); i++)
    {
        std::wstring stringifier(1, numberString[i]);

        if (numberString[i] != '0')
        {
            latin += dictionaries[i].at(stringifier) + L", ";
        }
    }

    latin = latin.substr(0, latin.length() - 2);

    return latin;
}

inline int LatinToNumber(const std::wstring input)
{
    const auto theMapOfDoom = new std::map<std::wstring, int>{
        {L"Unos", 1},
        {L"Duo", 2},
        {L"Tres", 3},
        {L"Quattuor", 4},
        {L"Quinque", 5},
        {L"Sex", 6},
        {L"Septem", 7},
        {L"Octo", 8},
        {L"Novem", 9},
        {L"Decem", 10},
        {L"Viginti", 20},
        {L"Traginta", 30},
        {L"Quadraginta", 40},
        {L"Quinquaginta", 50},
        {L"Sexaginta", 60},
        {L"Septuaginta", 70},
        {L"Octoginta", 80},
        {L"Nonaginta", 90},
        {L"Centum", 100},
        {L"Ducenti", 200},
        {L"Trecenti", 300},
        {L"Quadrigenti", 400},
        {L"Quingenti", 500},
        {L"Sescenti", 600},
        {L"Septigenti", 700},
        {L"Octingenti", 800},
        {L"Nongenti", 900},
        {L"Mille", 1000},
        {L"Duo Mille", 2000},
        {L"Tres Mille", 3000},
        {L"Quattuor Mille", 4000},
        {L"Quinque Milia", 5000},
        {L"Sex Milia", 6000},
        {L"Septem Milia", 7000},
        {L"Octo Milia", 8000},
        {L"Novem Milia", 9000},
        {L"Decem Milia", 10000},
        {L"Viginti Milia", 20000},
        {L"Triginta Milia", 30000},
        {L"Quadraginta Milia", 40000},
        {L"Quinquaginta Milia", 50000},
        {L"Sexaginta Milia", 60000},
        {L"Septuaginta Milia", 70000},
        {L"Octoginta Milia", 80000},
        {L"Nonaginta Milia", 90000},
        {L"Centum Milia", 100000},
        {L"Ducenti Milia", 200000},
        {L"Trecenti Milia", 300000},
        {L"Quadragenti Milia", 400000},
        {L"Quingenti Milia", 500000},
        {L"Sescenti Milia", 600000},
        {L"Septingenti Milia", 700000},
        {L"Octingenti Milia", 800000},
        {L"Nongenti Milia", 900000}
    };

    int result = 0;

    for (const auto numsInLatin = Split(input, L", "); auto s : numsInLatin)
    {
        result += theMapOfDoom->at(s);
    }

    return result;
}