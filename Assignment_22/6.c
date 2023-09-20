// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int *ptr;
    int large = 0;
    int i, j;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter the %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ptr[i] > ptr[j])
            {
                large = ptr[i];
            }
        }
    }
    printf("Largest element is %d", large);
    free(ptr);

    return 0;
}