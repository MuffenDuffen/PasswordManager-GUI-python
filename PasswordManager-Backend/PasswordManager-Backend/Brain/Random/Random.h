#pragma once
#include "limits.h"

class cRandom
{
private:
    const int _mbig = INT_MAX;
    const int _mseed = 161803398;
    const int _mz = 0;

    int _inext;
    int _inextp;
    int* _seed_array = new int[56]();

    double Sample();
    double GetSampleForLargeRange();
    int InternalSample();

public:
    explicit cRandom(int seed);
    ~cRandom();
    int Next();
    int Next(int min_value, int max_value);
    int Next(int max_value);
    double NextDouble();
};