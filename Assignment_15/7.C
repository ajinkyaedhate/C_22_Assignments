// 7. Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)

#include<stdio.h>
#include<math.h>
void duplicate(int a[],int n,int element){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]==element)
        count++;
    }
    if(count==0){
        printf("\nelement is not present in array\n");
    }
    else if(count==1){
        printf("\nelement is present but not repetative\n");
    }
    else
        printf("\nelement repeats for %d times\n",count);

}

int main(){
        int a []={1,2,2,3,4,5,5,4,4,5,4,2,1,1,6,6,7};
        int n= sizeof(a)/sizeof(a[0]);
        int element;
        printf("enter the element that you want to know its repitation in array:  ");
        scanf("%d",&element);
        duplicate(a,n,element);
        

        int m;


      return 0;
}