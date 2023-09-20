// 6. Write a program to reverse a string.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    for (i = 0, j = len - 1; i <= j; i++, j--)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = (char)ch;
    }

    // printf("Original string: %s", str);
    printf("reversed string: %s", str);

    return 0;
}