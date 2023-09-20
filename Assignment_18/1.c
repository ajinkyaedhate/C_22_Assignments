// 1. Write a function to calculate length of the string.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void lengthofstring(char s[])
{
    int i, length = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        length++;
    }
    printf("\nlength of string is %d\n", length);
}

int main()
{
    char s[] = "ajinkya";
    lengthofstring(s);

    return 0;
}