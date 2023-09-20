// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int size;
    int *ptr;

    printf("Enter the size of memory to be allocated in bytes: ");
    scanf("%d", &size);

    ptr = (int *)malloc(size);

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
        exit(1);
    }

    printf("Memory allocation successful!");
    free(ptr);

    return 0;
}