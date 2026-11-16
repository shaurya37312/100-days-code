// Print all enum names and integer values using a loop.
#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    for (enum Days day = SUNDAY; day <= SATURDAY; day++) {
        printf("%s = %d\n", names[day], day);
    }

    return 0;
}
