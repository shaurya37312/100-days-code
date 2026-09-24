// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    double cp, sp, percent;

    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);

    if (cp <= 0) {
        printf("Invalid cost price.\n");
    } else if (sp > cp) {
        percent = (sp - cp) * 100 / cp;
        printf("Profit = %.2lf%%\n", percent);
    } else if (sp < cp) {
        percent = (cp - sp) * 100 / cp;
        printf("Loss = %.2lf%%\n", percent);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
