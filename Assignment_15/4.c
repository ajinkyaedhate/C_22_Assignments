// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>
#include <math.h>

void arrayrightrotation(int a[], int d, int n)
{
    int m, i;
    for (d = 0; d < 2; d++)
    {
        m = a[n - 1];
        for (i = n - 1; i > 0; i--)
        {

            a[i] = a[i - 1];
            if (i == 1)
            {
                a[0] = m;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[] = {32, 29, 40, 12, 70}, d = 2;
    int n = 5, i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    arrayrightrotation(a, d, n);

    return 0;
}