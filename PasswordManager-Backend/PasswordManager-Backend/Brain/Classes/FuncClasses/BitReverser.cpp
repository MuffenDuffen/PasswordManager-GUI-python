#include "BitReverser.h"

#include "../HexStuffBackend/HexStuffBackend.h"

void cBitReverser::BitReverserLeL(std::string& input)
{
    for (auto& c : input)
    {
        auto binary = DecimalTo(c, 2);

        while (binary.length() < 16) binary.insert(0, "0");

        std::reverse(binary.begin(), binary.end());

        c = static_cast<char>(ToDecimal(binary, 2));
    }
}
