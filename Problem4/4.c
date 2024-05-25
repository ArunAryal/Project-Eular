// A palindromic number reads the same both ways. The largest palindrome made from the product of two 
//2-digit numbers is 9009=91×99. 
//Find the largest palindrome made from the product of two 3-digit numbers.
#include <stdio.h>
int palin(long long num)
{
    long long dup = num, rem, reverse = 0;
    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    if (reverse == dup)
        return 1;
    else
        return 0;
}

int main()
{
    long long largest = 0;
    for (long long i = 0; i < 1000; i++)
    {
        for (long long j = 0; j < 1000; j++)
        {
            if (palin(i * j) && i * j > largest)
            {
                largest = i * j;
            }
        }
    }
    printf("The largest palindrome number from the product of three digit numbers is %d", largest);

    return 0;
}