#define WSIZE 64;
#include<stdio.h>
long pcount_for
    (unsigned long x)
{
    size_t i;
    long result = 0;
    for( i = 0; i< 64; i++)
    {
        unsigned bit =
        (x >> i) & 0x1;
        result += bit;
    }
    return result;
}

// g++ -Og -S pcount_for1.c