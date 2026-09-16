// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int n, first, last, temp, p = 1;
    printf("enter a number :");

    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        p = p * 10;
    }

    first = temp;

    n = n - first * p;   // remove first digit
    n = n - last;        // remove last digit

    n = n + last * p;    // put last digit at beginning
    n = n + first;       // put first digit at end

    printf("%d", n);

    return 0;
}