// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int *ptr;
    int max = 0, min = 0;
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
    max = ptr[0];
    min = ptr[0];
    for (i = 0; i < n; i++)
    {
        {
            if (ptr[i] > max)
            {
                max = ptr[i];
            }
            if (ptr[i] < min)
            {
                min = ptr[i];
            }
        }
    }
    printf("Largest element is %d and smallest element of array is %d", max,min);
    free(ptr);

    return 0;
}