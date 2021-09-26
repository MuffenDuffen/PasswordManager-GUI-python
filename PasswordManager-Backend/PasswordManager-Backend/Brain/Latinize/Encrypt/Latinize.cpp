#include "Latinize.h"

#include <map>
#include <vector>

std::string NumberToLatin(const int number)
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
    return latin;
}
