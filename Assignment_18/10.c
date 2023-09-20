// 10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void repeatcharinstring(char s[])
{
    int hash[200] = {0};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        hash[s[i]]++;
    }

    for (i = 0; i < 200; i++)
    {
        if (hash[i] >1 && i!=' ')
        {

            printf("%c ----> %d\n", i, hash[i]);
        }
    }
}
int main()
{
    char s[200] = "";
    printf("Enter a string : \n");
    gets(s);
    repeatcharinstring(s);

    return 0;
}