// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    double l, b, area, perimeter;

    printf("Enter length and breadth: ");
    scanf("%lf %lf", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);

    return 0;
}
