#include "Random.h"
#include <limits.h>
#include <stdexcept>

double cRandom::Sample()
{
    //Including this division at the end gives us significantly improved
    //random number distribution.
    return (this->InternalSample() * (1.0 / _mbig));
}

int cRandom::InternalSample()
{
    int locINext = this->_inext;
    int locINextp = this->_inextp;

    if (++locINext >= 56) locINext = 1;
    if (++locINextp >= 56) locINextp = 1;

    int retVal = _seed_array[locINext] - _seed_array[locINextp];

    if (retVal == _mbig) retVal--;
    if (retVal < 0) retVal += _mbig;

    _seed_array[locINext] = retVal;

    _inext = locINext;
    _inextp = locINextp;

    return retVal;
}

cRandom::cRandom(const int seed)
{
    //Initialize our Seed array.
    //This algorithm comes from Numerical Recipes in C (2nd Ed.)
    const int subtraction = (seed == INT_MAX) ? INT_MAX : abs(seed);
    int mj = _mseed - subtraction;
    _seed_array[55] = mj;
    int mk = 1;
    for (int i = 1; i < 55; i++)
    {
        //Apparently the range [1..55] is special (Knuth) and so we're wasting the 0'th position.
        const int ii = (21 * i) % 55;
        _seed_array[ii] = mk;
        mk = mj - mk;
        if (mk < 0) mk += _mbig;
        mj = _seed_array[ii];
    }
    for (int k = 1; k < 5; k++)
    {
        for (int i = 1; i < 56; i++)
        {
            _seed_array[i] -= _seed_array[1 + (i + 30) % 55];
            if (_seed_array[i] < 0) _seed_array[i] += _mbig;
        }
    }
    _inext = 0;
    _inextp = 21;
}

cRandom::~cRandom()
{
    delete _seed_array;
}

int cRandom::Next()
{
    return this->InternalSample();
}

double cRandom::GetSampleForLargeRange()
{
    int result = this->InternalSample();
    if ((InternalSample() % 2 == 0) ? true : false)
    {
        result = -result;
    }
    double d = result;
    d += (INT_MAX - 1); // get a number in range [0 .. 2 * Int32MaxValue - 1)
    d /= 2 * INT_MAX - 1;
    return d;
}

int cRandom::Next(const int min_value, const int max_value)
{
    if (min_value > max_value)
    {
        throw std::invalid_argument("minValue is larger than maxValue");
    }

    if (const long range = static_cast<long>(max_value) - min_value; range <= static_cast<long>(INT_MAX))
    {
        return (static_cast<int>(this->Sample() * range) + min_value);
    }
    else
    {
        return static_cast<int>(static_cast<long>(this->GetSampleForLargeRange() * range) + min_value);
    }
}


int cRandom::Next(const int max_value)
{
    if (max_value < 0)
    {
        throw std::invalid_argument("maxValue must be positive");
    }

    return static_cast<int>(this->Sample() * max_value);
}

double cRandom::NextDouble()
{
    return this->Sample();
}
