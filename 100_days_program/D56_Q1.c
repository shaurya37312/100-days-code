// Write a C program to find the nth Fibonacci number using recursion.

#include <stdio.h>

long long fibonacci(int n)
{
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%lld", fibonacci(n));

    return 0;
}
