// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

enum StudentIndex {
    RAVI,
    SITA,
    AMAN
};

struct Student {
    char name[20];
    int roll;
    int marks;
};

int main() {
    struct Student s[3] = {
        {"Ravi", 101, 95},
        {"Sita", 102, 85},
        {"Aman", 103, 88}
    };

    int topper = RAVI;

    for (int i = SITA; i <= AMAN; i++) {
        if (s[i].marks > s[topper].marks) {
            topper = i;
        }
    }

    printf("Topper: %s (Marks: %d)", 
           s[topper].name, s[topper].marks);

    return 0;
}