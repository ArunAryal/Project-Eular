//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
#include <stdio.h>
#include <math.h>

int main()
{
    __int64 n = 100, dup = n,inot=0;
    for (__int64 i = 2; i <= sqrt(n); i++)
    {
        if (dup % i == 0 && dup!=i)
        {
            printf("%lld is a prime factor of %lld\n", i, n);
            dup /= i;
            inot=i;
        }
    }
    printf("%lld is the largest factor of %lld", dup*inot, n);
    return 0;
}
// Not yet working in all cases.