// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[3] = {
        {"Rahul", 101, 85.5},
        {"Riya", 102, 92.0},
        {"Aman", 103, 78.5}
    };

    struct Student top = findTop(s, 3);

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
