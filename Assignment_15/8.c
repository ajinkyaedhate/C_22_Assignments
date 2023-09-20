// 8. Write a function in C to print all unique elements in an array.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void duplicate(int a[],int n){
    int i,hash[200]={0};
     for (i = 0; i < n; i++)
    {
        hash[a[i]]++;
    }
    for (i = 0; i < n - 1; i++)
    {
        if(hash[i]==1)
        printf("%d is unique element in array\n", i);
    }
}


int main()
{
    int a[] = {1, 2, 2, 3, 4, 5, 6, 5, 6, 7, 1, 2, 3};
    int n = sizeof(a) / sizeof(a[0]);
    //int hash[200] = {0};
    duplicate(a,n);

    return 0;
}