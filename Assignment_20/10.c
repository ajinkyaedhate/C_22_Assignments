// 10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(){
        char s[] = "Hello World";
        int n=strlen(s);
        int i;

        char *p = &s[n-1];
        while(p>=s)
        {
           printf("%c",*p);
           p--;
        }

      return 0;
}