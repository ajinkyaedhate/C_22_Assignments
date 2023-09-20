#include<stdio.h>
#include<math.h>
int squareofnaturalnumber(int n,int count){
    if(count<n){
          printf("%d ",count*count);
        squareofnaturalnumber(n,count+1);
       
        
    }

    

}
int main(){
    int n=20;
    printf("\n");
        squareofnaturalnumber(n,0);
   printf("\n");
      return 0;
}