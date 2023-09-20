// 1. Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.
#include <stdio.h>
#include <string.h>

int main()
{
    char strings[5][50];
    int vowel_counts[5] = {0};

    printf("Enter 5 strings:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", strings[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < strlen(strings[i]); j++)
        {
            if (strings[i][j] == 'a' || strings[i][j] == 'e' || strings[i][j] == 'i' || strings[i][j] == 'o' || strings[i][j] == 'u' ||
                strings[i][j] == 'A' || strings[i][j] == 'E' || strings[i][j] == 'I' || strings[i][j] == 'O' || strings[i][j] == 'U')
            {
                vowel_counts[i]++;
            }
        }
    }

    printf("Number of vowels in each string:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s: %d\n", strings[i], vowel_counts[i]);
    }

    return 0;
}
