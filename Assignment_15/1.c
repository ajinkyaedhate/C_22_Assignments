// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
#include<math.h>

int maximum(int a[], int n, int max){
    int i;
    for ( i = 0; i < n; i++)
    {
        if(a[i]>max)
        max=a[i];

       
        
    }
     return max;
    
}
int main(){
        int a[10]={11,2,3,4,5,6,7,5,8,10};
        int max=a[0],n=10,max1;
        max1=maximum(a,n,max);
        printf("%d",max1);

      return 0;
}