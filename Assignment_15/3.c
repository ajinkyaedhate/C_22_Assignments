// Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
#include<math.h>

void sortarray(int a[], int n){
    int temp=0,i,j;
    for(i=0;i<n-1;i++)
    {
            for(j=i;j<n;j++)
            {
            if(a[i]<a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
                }
            }
    }
      for(i=0;i<n;i++)
      {
        printf("%d ",a[i]);
      }


}
int main(){
        int a[7]={1,9,-3,2,6,6,7};
        int n=7;
        sortarray(a, n);
        

      return 0;
}