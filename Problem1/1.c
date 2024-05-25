// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdio.h>

int arithmeticSumm(int n, int limit)
{
    int term = (limit - 1) / n;
    return n * term * (term + 1) / 2;
}
int main()
{
    int sum = 0, i, a, b, ul;
    printf("enter any two numbers");
    scanf("%d%d", &a, &b);
    printf("Enter your upper limit");
    scanf("%d", &ul);
    sum = arithmeticSumm(a, ul) + arithmeticSumm(b, ul) - arithmeticSumm(a * b, ul);
    printf("The sum is %d", sum);
}