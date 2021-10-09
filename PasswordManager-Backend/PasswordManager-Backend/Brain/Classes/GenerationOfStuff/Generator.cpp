#include "Generator.h"

void* cGenerator::generatePassDetails(const std::wstring& master_password)
{
    const auto passDetails = new cPassDetails(master_password);

    return static_cast<void*>(passDetails);
}
