// 1. Write a program to calculate the length of the string. (without using builtin method)

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char a[] = "ajinkya";
  int length, length1, length2;
  int i;
  length2 = strlen(a);
  length1 = sizeof(a) - 1;
  for (i = 0; a[i] != '\0'; i++)
  {
    length++;
  }
  printf("using loop : %d\nusing sizeof operator: %d \nusing strlen() function: %d\n ", length, length1, length2);
  return 0;
}