#include<stdio.h>
#include<math.h>
void reversenumber(int n){
    if(n==0){
        return;
    }
    else {
        printf("%d",n%10);
        reversenumber(n/10);

    }

}
int main(){
    int n=12345;
        reversenumber(n);
        

      return 0;
}