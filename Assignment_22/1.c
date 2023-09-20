// 1. Define a function to input variable length string and store it in an array without
// memory wastage.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
char *input_string()
{
    char *ptr = NULL;
    int c;
    size_t len = 0;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        ptr = (char *)realloc(ptr, len + 1);
       // printf("%c",c);
        ptr[len] = c;
        len++;
    }
 //   printf("\n%d----%d\n",sizeof(c),len);
    if (ptr != NULL)
    {
        ptr[len] = '\0';
    }
    return ptr;
}
int main()
{
    char *ptr;
    printf("Enter a string:\n");
    ptr = input_string();
    if (ptr == NULL)
    {
        printf("\n\nError: Memory allocation failed\n");
        return 1;
    }
    printf("your entered string is: %s\n", ptr);
    free(ptr);

    return 0;
}
