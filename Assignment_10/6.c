//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
#include<math.h>
int facto(int n){
    if (n==1 || n==0) return 1;
    else return n*facto(n-1);
}

int main(){
    int num,a;
    printf("Enter a number: ");
    scanf("%d",&num);
    a=facto(num);
    printf("factorial of %d is %d",num,a);

    


      return 0;
}