// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char string[] = "occurrences of character in string\n";
  printf("String is: %s", string);
  char c;
  printf("Enter the character of which occurrences has to be find: \n");
  scanf("%c", &c);

  int count = 0, i;
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == c)
      count++;
  }
  printf("no of occurrence of %c are %d", c, count);

  return 0;
}
