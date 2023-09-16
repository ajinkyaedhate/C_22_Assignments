// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
#include <ctype.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf(" %c", &character);

    if (isalpha(character))
    {
        if (isupper(character))
        {
            printf("%c is an uppercase alphabet.\n", character);
        }
        else
        {
            printf("%c is a lowercase alphabet.\n", character);
        }
    }
    else if (isdigit(character))
    {
        printf("%c is a digit.\n", character);
    }
    else
    {
        printf("%c is a special character.\n", character);
    }

    return 0;
}
