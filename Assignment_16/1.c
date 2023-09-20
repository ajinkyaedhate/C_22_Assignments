// 1. Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
        int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
        int b[3][3]={{2,2,2},{2,2,2},{2,2,2}};
        int c[3][3];
        int i,j;

        for (i=0;i<3;i++){
           // c[i][j]=0;
             for (j=0;j<3;j++){
                
                c[i][j]=a[i][j]+b[i][j];
             }
        }
        for (i=0;i<3;i++){
             for (j=0;j<3;j++){
                printf("%d\t", a[i][j]);
             }
             printf("\n");
        }
             printf("\n");

for (i=0;i<3;i++){
             for (j=0;j<3;j++){
                printf("%d\t", b[i][j]);
             }
             printf("\n");
        }
             printf("\n");


        for (i=0;i<3;i++){
             for (j=0;j<3;j++){
                printf("%d\t", c[i][j]);
             }
             printf("\n");
        }

      return 0;
}