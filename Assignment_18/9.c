// 9. Write a function to reverse a string word wise. (For example if the given string is
// “iNeuron Education Services” then the resulting string should be “Services Education
// iNeuron” )

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void wordreverse(char s[])
{
    char result[200] = "", word[50];
    int i, j, n;
    n = strlen(s);
    j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {

        if (s[i] == ' ')
        {
            word[j] = '\0';
            strrev(word);
            strcat(result, word);
            strcat(result, " ");
            j = 0;
        }
        else
        {
            word[j] = s[i];
            j++;
        }
    }
    printf("\n%s\n", result);
}

int main()
{
    char s[200];
    printf("\nEnter a string:\n");
    gets(s);
    strrev(s);
    strcat(s, " ");
    // printf("%s",s);
    wordreverse(s);

    return 0;
}