// 3. Write a program to read and display a 2D array of strings in C language.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[10][50];
  int i, n = 5;
  // printf("Enter number of strings you want:\n");
  // scanf("%d",&n);
  // printf("%d",n);
  printf("enter five strings: \n");

  for (i = 0; i < n; i++)
  {
    gets(s[i]);
  }
  printf("\nyour strings are: \n\n");

  for (i = 0; i < n; i++)
  {
    printf("%s  ", s[i]);
  }

  return 0;
}