// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "ajinkya";
    int count, i;
    int hash[200] = {0};

    for (i = 0; s[i] != '\0'; i++)
    {
        hash[s[i]]++;
    }
    for (i = 0; i < 123; i++)
    {
        if (hash[i] > 0)
            printf("%c--%d\n", i, hash[i]);
    }

    return 0;
}