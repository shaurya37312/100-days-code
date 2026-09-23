// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    double r, area, circumference;
    const double pi = 3.14159;

    printf("Enter radius: ");
    scanf("%lf", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area = %.2lf\n", area);
    printf("Circumference = %.2lf\n", circumference);

    return 0;
}
