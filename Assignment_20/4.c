// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>

int main() {
   int num = 10;
   int *ptr = &num;
   
   printf("The value of num is: %d\n", num);
   printf("The address of num is: %p\n", &num);
   printf("The value of ptr is: %p\n", ptr);
   printf("The value that ptr points to is: %d\n", *ptr);
   
   *ptr = 20;
   
   printf("After modifying the value using the pointer, the value of num is: %d\n", num);
   
   return 0;
}