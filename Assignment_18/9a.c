// 9. Write a function to reverse a string words at same place.
// input--> ajinkya edhate
// output-->ayknija etahde

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void reverse(char s[])
{

    int i, j, n = 0;
    char ch;
    n = strlen(s);

    for (i = 0; i < n / 2; i++)
    {
        ch = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = ch;
    }
}

void strrevbywords(char s[])
{
    char res[200] = "", word[50];
    int i, j, n;
    n = strlen(s);
    j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == ' ')
        {
            word[j] = '\0';
            reverse(word);
            strcat(res, word);
            strcat(res, " ");
            j = 0;
        }

        else
        {
            word[j] = s[i];
            j++;
        }
    }
    printf("%s", res);
}

int main()
{
    char s[200];
    int n1 = 0;
    printf("enter a string: ");
    gets(s);
    strcat(s, " ");
    strrevbywords(s);

    return 0;
}