// Write a C program to find the maximum of three numbers using a function.

#include <stdio.h>

int maximum(int a, int b, int c)
{
    int max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    return max;
}

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", maximum(a, b, c));

    return 0;
}
