//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include<stdio.h>
int main(){
    int a,b;

    printf("Enter 1st number");
    scanf("%d", &a);

    printf("Enter 2nd number");
    scanf("%d", &b);

    printf("sum is %d",a+b);

    return 0;
}