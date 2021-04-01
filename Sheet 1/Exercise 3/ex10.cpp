#include <iostream>
#include <climits>

using namespace std;

//18446744073709551615 is the largest integer
//that can be represented in a unsigned long
//long type

//65 is the largest number whose factorial is
//less than that integer

unsigned long long factorial_ite(unsigned int n)
{
    unsigned long long res = 1;

    for (unsigned int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

unsigned long long factorial_rec(unsigned int n)
{
    if (n < 2)
        return 1;
    else
        return n * factorial_rec(n - 1);
}

int main()
{
    return 0;
}