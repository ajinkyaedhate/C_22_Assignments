#include<stdio.h>
#include<math.h>
int naturalnumber(int n){
    int i=n;
   if(n==1) 
   printf("%d ",n);
   else{
  
   naturalnumber(n-1);
    printf("%d ",n);
}
}
int main(){
    int n=20;
        naturalnumber(n);

      return 0;
}