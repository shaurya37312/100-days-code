// Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    double a, b, temp;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %.2lf\n", a);
    printf("b = %.2lf\n", b);

    return 0;
}
