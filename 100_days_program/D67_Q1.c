// Write a C program to add two complex numbers using structures.

#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

int main()
{
    struct Complex c1, c2, sum;

    scanf("%f %f", &c1.real, &c1.imaginary);
    scanf("%f %f", &c2.real, &c2.imaginary);

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    printf("%.2f + %.2fi", sum.real, sum.imaginary);

    return 0;
}
