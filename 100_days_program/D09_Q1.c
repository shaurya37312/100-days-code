// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2, real, imag;

    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("It is not a quadratic equation.\n");
    } else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2lf\n", r1);
            printf("Root 2 = %.2lf\n", r2);
        } else if (d == 0) {
            r1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2lf\n", r1);
        } else {
            real = -b / (2 * a);
            imag = sqrt(-d) / (2 * a);

            printf("Roots are complex.\n");
            printf("Root 1 = %.2lf + %.2lfi\n", real, imag);
            printf("Root 2 = %.2lf - %.2lfi\n", real, imag);
        }
    }

    return 0;
}
