// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, k;
    int maxLength = 0;
    int currentLength;

    printf("Enter string: ");
    scanf("%s", s);

    int n = strlen(s);

    for (i = 0; i < n; i++)
    {
        currentLength = 0;

        for (j = i; j < n; j++)
        {
            int repeated = 0;

            // Check whether s[j] already occurred
            // in the current substring
            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1)
                break;

            currentLength++;

            if (currentLength > maxLength)
                maxLength = currentLength;
        }
    }

    printf("%d", maxLength);

    return 0;
}