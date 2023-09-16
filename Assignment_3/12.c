// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    if (alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("%c is in uppercase.\n", alphabet);
    }
    else if (alphabet >= 'a' && alphabet <= 'z')
    {
        printf("%c is in lowercase.\n", alphabet);
    }
    else
    {
        printf("Invalid input. Please enter an alphabet.\n");
    }

    return 0;
}
