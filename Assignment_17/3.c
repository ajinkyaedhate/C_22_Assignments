// 3. Write a program to count vowels in a given string

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
            if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
            count++;
        }
        printf("no of vowels in string are %d",count);

      return 0;
}