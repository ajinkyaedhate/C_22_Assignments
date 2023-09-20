// 2. Write a program to print first N terms of Fibonacci series.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
        int n=8;
        int i=0;
        int num1=1,num2=1,num3;
        printf("%d  %d ",num1,num2);
        for (i=3;i<=n;i++){
             num3=num1+num2;
             num1=num2;
             num2=num3;
             printf(" %d ",num3);
             }
         

      return 0;
}