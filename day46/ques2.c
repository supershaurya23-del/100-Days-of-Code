// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase alphabet
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    // Find first character that repeats
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            freq[str[i] - 'a'] > 1) {
            
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}