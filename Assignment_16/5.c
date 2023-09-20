// 5. Write a program in C to find the sum of left diagonals of a matrix.

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
    printf("\n");

    for (i = 0; i < 3; i++){

        for (j = 0; j < 3; j++)
         {
                if(i+j==2)
                sum=sum+a[i][j];
            }
            printf("\n");
        }
        printf("%d",sum);

    return 0;
}