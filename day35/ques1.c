// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, a[100];
    int largest, secondLargest;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    secondLargest = a[0];

    // Find largest element
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    // Find second largest element
    for (int i = 0; i < n; i++) {
        if (a[i] > secondLargest && a[i] < largest) {
            secondLargest = a[i];
        }
    }

    printf("%d", secondLargest);

    return 0;
}