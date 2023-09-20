// 7. Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)

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
        if(hash[i]==2)
        printf("%d element has duplicate copy in array(2times occures)\n", i);
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