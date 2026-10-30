// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, maxDigit = 0, maxCount = 0;

    scanf("%lld", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0] = 1;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d", maxDigit);

    return 0;
}
