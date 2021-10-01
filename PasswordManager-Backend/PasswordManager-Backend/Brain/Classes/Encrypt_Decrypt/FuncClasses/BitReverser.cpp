#include "BitReverser.h"

#include "../HexStuffBackend/HexStuffBackend.h"

void cBitReverser::BitReverserLeL(std::wstring& input)
{
    for (auto& c : input)
    {
        auto binary = DecimalTo(c, 2);

        while (binary.length() < 16) binary.insert(0, L"0");

        std::reverse(binary.begin(), binary.end());

        c = std::stoi(binary, nullptr, 2);
    }
}
