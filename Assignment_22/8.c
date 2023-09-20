// 8. Write a program to demonstrate dangling pointers in C.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    free(ptr);

    printf("Value at ptr: %d\n", *ptr);
    printf("The given pointer is freed, means pointer is pointing to the location which is no longer available, this is called dangling pointer error. The above value is the any random garbage value ");

    return 0;
}
