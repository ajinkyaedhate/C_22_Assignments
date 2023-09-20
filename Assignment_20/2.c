// 2. Write a function to swap strings of two char arrays of calling functions.
#include <stdio.h>
#include <string.h>

void swapStrings(char *p1, char *p2)
{
    char temp[50];

    int i, l1 = 0, l2 = 0;
    for (i = 0; *(p1 + i) != '\0'; i++)
    {
        l1++;
    }
    for (i = 0; *(p2 + i) != '\0'; i++)
    {
        l2++;
    }

    for (i = 0; i < l1 || i < l2; i++)
    {
        temp[i] = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp[i];
    }
}

int main()
{
    char str1[50] = "", str2[50] = "";

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    printf("\nBefore swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    swapStrings(str1, str2);

    printf("\nAfter swapping:\n");
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}