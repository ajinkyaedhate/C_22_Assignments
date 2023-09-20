// 8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum = 0;
    int *p = a;
    int n = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < n; i++)
    {
        sum += *p;
        p++;
        // or
        // sum += *(p+i);
    }
    printf("\nsum of all array elements is %d", sum);

    return 0;
}