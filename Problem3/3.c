#include <stdio.h>

int prime(long long a)
{
    long long i;
    if (a == 1)
        return 0;
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    long long number = 600851475143, factor, i, pf;
    for (i = 1; i <= number / 2; i++)
    {
        if (i % 1000000000 == 0)
            printf("We have reached %d", i);
        if (number % i == 0)
        {
            factor = i;
            if (prime(factor) == 1)
            {
                printf("%d\n", factor);
                pf = factor;
            }
        }
    }
    printf("The largest prime factor of %d is %d", number, pf);
    return 0;
}
