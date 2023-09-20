// 8. Write a function to count words in a given string

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void countwords(char s[])
{
    int i, count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' && isalpha(s[i - 1]) && i > 0)
            count++;
    }
    if (isalpha(s[i - 1]))
        count++; // for the last word
    printf("number of words in string are %d\n", count);
}

int main()
{
    char s[200];
    printf("Enter a string:");
    fgets(s, 200, stdin);
    countwords(s);

    return 0;
}