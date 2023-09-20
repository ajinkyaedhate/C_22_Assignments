// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j,sumrow=0,sumcol=0,n,m,o,p;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\nEnter the index of two rows that you want to add: ");
    scanf("%d %d", &m, &n);
    printf("\nEnter the index of two columns that you want to add: ");
    scanf("%d %d", &o, &p);
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(i==m || i==n)
            sumrow=sumrow+a[i][j];
        }
    }
  for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if(j==o || j==p)
            sumcol=sumcol+a[i][j];
        }
    }

        printf("\nsum of two rows is %d\n",sumrow);
        printf("\nsum of two columns is %d\n",sumcol);


    return 0;
}