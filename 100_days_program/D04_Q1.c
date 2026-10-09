// Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    return 0;
}
