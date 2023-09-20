#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void binaryofdecimal(int n){
    if(n==0){
        return ;
    }
    binaryofdecimal(n/2);
    printf("%d",n%2);

        
    }

    
    
int main(){
        int n=12,x;
       binaryofdecimal(n);
       

      return 0;
}