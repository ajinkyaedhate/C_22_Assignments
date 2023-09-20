// 6. Write a program to calculate the length of the string using a pointer

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[] = "how are you today";
    char *p;
    p = s;
    int i;
    for ( i = 0; *(p + i); i++);
    printf("length of string is %d", i);

    return 0;
}