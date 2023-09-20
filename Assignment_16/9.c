// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j,count=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
 

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++)
         {
                if(a[i][j]==0)
                count++;
            }
            printf("\n");
        }

    if(count>=5)
    printf("\nmatrix is sparse matrix");
    else
    printf("\nmatrix is dense matrix");
 

    return 0;
}