// 1. Write a function to print string in reverse order.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void srev(char a[])
{
  int i;
  int j = strlen(a);
  char temp;
  for (i = 0; i <= j; i++, j--)
  {
    temp = a[i];
    a[i] = a[j - 1];
    a[j - 1] = temp;
  }
  printf("Reversed string is: %s", a);
}
int main()
{
  char string[100];
  printf("ENter a string:\n");

  fgets(string, 100, stdin); // best way to get string input
  srev(string);
  printf("\n");
  srev(string); /* call function to reverse the given string*/

  return 0;
}