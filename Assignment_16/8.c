// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j,sum=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nupper triangular matrix is: \n");

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++)
         {
                if(j>=i)
                printf("%d\t",a[i][j]);
                else
                printf("%d\t",0);
            }
            printf("\n");
        }
 

    return 0;
}