// Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE
};

struct Student {
    char name[20];
    int roll;
    int marks;
    enum Gender gender;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d | ",
           s.name, s.roll, s.marks);

    if (s.gender == MALE)
        printf("Gender: Male");
    else
        printf("Gender: Female");
}

int main() {
    struct Student s = {"Neha", 104, 92, FEMALE};

    printStudent(s);

    return 0;
}