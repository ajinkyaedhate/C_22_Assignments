// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c;
    char *ptr = NULL;
    size_t len = 0;
    printf("Enter a text you want:\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            printf("Your entered text is:\n");

            ptr = realloc(ptr, len + 1);
            ptr[len] = '\0';
            printf("%s\n", ptr);
            free(ptr);
            return 0;
        }
        else
        {
            ptr = realloc(ptr, len + 1);
            ptr[len] = c;
            len += 1;
        }
    }

    return 0;
}