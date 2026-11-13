// Write a C program to calculate the power of a number using recursion.

#include <stdio.h>

long long power(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    scanf("%d %d", &base, &exponent);

    printf("%lld", power(base, exponent));

    return 0;
}
