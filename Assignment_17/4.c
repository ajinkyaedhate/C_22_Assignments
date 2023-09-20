// 4. Write a program to convert a given string into uppercase

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
        char string[] = "occurrences of character in string\n";
        printf("String is: %s",string);
        char c;
        int count=0, i;
        for (i=0;string[i]!='\0';i++){
            if(string[i]>=97 && string[i]<=122){
                string[i]=string[i]-32;
            }
        }
            
        
        printf("string in upper is : %s",string);

      return 0;
}