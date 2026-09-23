// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>

int main() {
    double p, r, t, si, ci, amount;
    int i;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &p, &r, &t);

    si = (p * r * t) / 100;

    amount = p;

    for (i = 1; i <= t; i++) {
        amount = amount * (1 + r / 100);
    }

    ci = amount - p;

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}
