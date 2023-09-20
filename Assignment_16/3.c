// 3. Write a program in C to find the transpose of a given matrix.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[4][3] = {1, 2, 3,4,5,6,7,8,9,10,11,12};
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (j = 0; j < 3; j++)
    {

        for (i = 0; i < 4; i++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

            return 0;
        }