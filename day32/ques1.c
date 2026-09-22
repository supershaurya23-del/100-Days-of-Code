// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n1, n2;
    int a[100], b[100], c[200];

    scanf("%d", &n1);

    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);

    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Copy first array into merged array
    for(int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    // Copy second array after first array
    for(int i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    // Print merged array
    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}