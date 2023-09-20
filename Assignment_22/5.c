//  5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation./
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    int i;
    float sum = 0;
    printf("Enter how many elements you want in your array:\n");
    scanf("%d", &n);
    printf("Enter %d elements for array:\n", n);
    float *ptr = NULL;
    ptr = (float *)malloc(n * sizeof(float));
    if (ptr != NULL)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%f", &ptr[i]);
            sum += ptr[i];
        }
    }
    else
    {
        printf("Memory allocation failed\n");
    }
    printf("Entered array elements are ");
    for (i = 0; i < n; i++)
    {
        printf("%.2f ", ptr[i]);
    }

    printf("\nSum of all elements is: %.2f\n", sum);

    free(ptr);

    return 0;
}