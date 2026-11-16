// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

enum StudentNo {
    FIRST,
    SECOND,
    THIRD
};

struct Student {
    char name[20];
    int roll;
    int marks;
};

struct Student findTop(struct Student s[], int n)
{
    struct Student top = s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    struct Student s[3];
    struct Student top;

    for (int i = FIRST; i <= THIRD; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}