#include<stdio.h>
#include<math.h>
int oddnaturalnumber(int n,int count){
    if(count<=n){
        printf("%d ",2*count-1);
        oddnaturalnumber(n,count+1);
        
    }

    

}
int main(){
    int n=20;
        oddnaturalnumber(n,1);

      return 0;
}