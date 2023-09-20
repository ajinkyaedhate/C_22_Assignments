// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
//  the user.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[20][50];

    int n, i, j;
    n = 10;
    printf("enter a 10 city names:");
    for (i = 0; i < n; i++)
    {
        gets(s[i]);
    }

    printf("entered cities are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t", s[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            int p = strcmp(s[i], s[j]);
            if (p > 0)
            {
                char temp[1][50];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nSorted list of cities is: \n");

    for (i = 0; i < n; i++)
    {
        printf("%s  ", s[i]);
    }

    return 0;
}