// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void merge(int a[], int b[], int n1, int n2)
{
    int i, j, k = 0;
    int c[n1 + n2];

    for (i = 0, j = 0; i < n1 && j < n2;)
    {
        if (a[i] > b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    printf("%d %d\n", i, j);

    if (i < n1)
    {
        for (; i < n1; i++)
        {
            c[k] = a[i];
            k++;
        }
    }
    if (j < n2)
    {
        for (; j < n2; j++)
        {
            c[k] = b[j];
            k++;
        }
    }
    printf("%d %d\n", i, j);

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
}

int main()
{
    int a[] = {9, 7, 6, 5, 3, 2};
    int b[] = {5, 2, 1, 0, -2};
    int n1 = 6, n2 = 5;
    merge(a, b, n1, n2);

    return 0;
}