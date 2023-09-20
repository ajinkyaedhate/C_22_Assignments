// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[] = "how are you today";
    char *p = string;
    int count1 = 0, count2 = 0, i, j = 0;
    for (i = 0; *p != '\0' && i != ' '; i++, p++)
    {
        if (*p == ' ')
            j++;
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
        {
            count1++;
        }
    }

    printf("number of vowels in string are %d and number of consonants in string are %d \n", count1, i - j - count1);
    return 0;
}