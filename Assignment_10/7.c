// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>
#include<math.h>
int facto(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combi(int n, int r){
    
    return facto(n)/(facto(r)*facto(n-r));


}

int main(){
        int n,r,nCr;
        printf("Enter the n and r value to calvulate combinations: ");
        scanf("%d%d",&n,&r);
        nCr=combi(5,2);
        printf("combinations are %d",nCr);


      return 0;
}