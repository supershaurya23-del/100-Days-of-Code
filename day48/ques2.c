// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0, end;
    char temp;

    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; ; i++) {

        // End of a word
        if (str[i] == ' ' || str[i] == '\0') {

            end = i - 1;

            // Reverse the current word
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            // Start of next word
            start = i + 1;
        }

        // End of entire string
        if (str[i] == '\0')
            break;
    }

    printf("%s", str);

    return 0;
}