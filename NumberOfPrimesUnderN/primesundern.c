#include <stdio.h>

void Print(long long arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%lld\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    long long n, i, num[100000], j, length = 0, primes = 0;
    printf("Enter any number");
    scanf("%lld", &n);
    // saving the odd number
    for (i = 3; i <= n; i += 2)
    {
        num[length] = i;
        length++;
    }

    for (i = 0; i < length - 1; i++)
    {
        if (num[i] == 0)
            continue;
        for (j = i + 1; j < length; j++)
        {
            if (num[j] % num[i] == 0)
            {
                num[j] = 0;
            }
        }
    }
    Print(num, length);

    // counting primes
    for (i = 0; i < length; i++)
    {
        primes += num[i] != 0;
    }

    printf("The numbers of prime till %lld is %lld ", n, primes + 1);
}