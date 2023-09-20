// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

int main()
{
    char strings[100][100];
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings: \n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", strings[i]);
    }

    printf("Palindromes in the list are: \n");
    for (int i = 0; i < n; i++)
    {
        int len = strlen(strings[i]);
        int is_palindrome = 1;
        for (int j = 0; j < len / 2; j++)
        {
            if (strings[i][j] != strings[i][len - j - 1])
            {
                is_palindrome = 0;
                break;
            }
        }
        if (is_palindrome)
        {
            printf("%s\n", strings[i]);
        }
    }
    return 0;
}
