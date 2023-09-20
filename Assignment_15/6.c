// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include<stdio.h>
#include<math.h>

void reverseorder(int a[],int n){
    int m,i;
    
        for(i=n-1;i>=0;i--){
          printf("%d ",a[i]);
        }
}
             

   
int main(){
        int a[]={1,2,3,4,5};
        int n=5,i;
        printf("forward order \n");

         for(i=0;i<n;i++)
        printf("%d ",a[i]);
        printf("\n");
    

        reverseorder(a,n);


      return 0;
}