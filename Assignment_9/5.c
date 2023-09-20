#include<stdio.h>
#include<math.h>

int main(){
        int a;
        printf("Entervalue of a between 1 to 3 : ");
        scanf("%d",&a);

        switch(a){
            case 1:
                    printf("good");
                    break;
            case 2:
                     printf("better");  

                    break;  
            case 3:
                    printf("Bestṇ");
                    break;
            default:
                    printf("Invalid Input");
              }

      return 0;
}