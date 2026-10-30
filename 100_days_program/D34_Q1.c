// Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, pos, x, i;

    scanf("%d", &n);

    int a[n + 1];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &pos);
    scanf("%d", &x);

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = x;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
