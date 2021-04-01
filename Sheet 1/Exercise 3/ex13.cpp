#include <iostream>
#include <assert.h>

int rollDie(int low = 1, int high = 6)
{
 assert(high >= low);
 return (rand() % (high - low + 1)) + low;
}

int main()
{
    return 0;
}