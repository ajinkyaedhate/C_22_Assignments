// 3. Write a function to sort an array of int type values.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void sort(int *p, int n)
{
    int i, j;
    int temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main()
{
    int a[100];
    int n;
    int i, j, k;
    printf("Enter a how many elements in array you want:\n");
    scanf("%d", &n);
    printf("Enter %d elements for array: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    sort(a, n);
    printf("\nAfter sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}