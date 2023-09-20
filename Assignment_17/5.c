// 5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
        char string[] = "My NAme is aJInKYa\n";
        printf("\nString is: %s",string);
        char c;
        int count=0, i;
        for (i=0;string[i]!='\0';i++){
            if(string[i]>=65 && string[i]<=90){
                string[i]=string[i]+32;
            }
        }
            
        
        printf("string in lower is : %s\n",string);

      return 0;
}