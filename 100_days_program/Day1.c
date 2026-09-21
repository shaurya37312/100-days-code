// Write a program to input two numbers and display their sum.

#include <stdio.h>

int main(void) {
    float first, second, sum;

    printf("Enter two numbers: ");
    scanf("%f %f", &first, &second);

    sum = first + second;

    printf("Sum = %.2f\n", sum);

    return 0;
}
