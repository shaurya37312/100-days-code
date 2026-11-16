// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role = ADMIN;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin");
            break;

        case USER:
            printf("Welcome User");
            break;

        case GUEST:
            printf("Welcome Guest");
            break;

        default:
            printf("Invalid Role");
    }

    return 0;
}
