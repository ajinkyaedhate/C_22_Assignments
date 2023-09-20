// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void alphanumeric(char s[])
{
    int i, length = 0, count1 = 0, count2 = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            count1 = 1;
        if (s[i] >= 47 && s[i] <= 58)
            count2 = 1;
    }
    if (count1 == 1 && count2 == 1)
        printf("string is aplphanumeric\n");
    else if (count1 == 1 && count2 == 0)
        printf("string is alphabetic only\n");
    else if (count1 == 0 && count2 == 1)
        printf("string is numeric only\n");
}

int main()
{
    char s[100];
    printf("Enter astring: ");
    fgets(s, 100, stdin);
    alphanumeric(s);

    return 0;
}