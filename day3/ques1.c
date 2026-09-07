// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<stdio.h>
int main(){
    int celsius;
    printf("Enter celsius : ");
    scanf("%d", &celsius);

    printf("Fahrenheit = %.0f\n", (celsius * 1.8) + 32);

    return 0;
}