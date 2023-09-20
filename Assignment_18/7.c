// 7. Write a function to check whether a given string is palindrome or not.

#include <stdio.h>
#include <string.h>
void stringpalindrome(char s[])
{
    int i, length;
    int flag = 0;
    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        if (s[i] != s[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome string", s);
    }
    else
    {
        printf("%s is a palindrome string", s);
    }
}

int main()
{
    char s[200];
    printf("Enter a string:");
    fgets(s, 200, stdin);
    stringpalindrome(s);

    return 0;
}