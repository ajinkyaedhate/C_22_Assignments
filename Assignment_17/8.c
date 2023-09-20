// 8. Write a program in C to copy one string to another string.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s1[] = "ajinkya";
  int n = strlen(s1);
  char s2[100];
  int i;
  for (i = 0; s1[i] != '\0'; i++)
  {
    s2[i] = s1[i];
  }
  s2[i]='\0';
  printf("%s \n%s", s1, s2);

  return 0;
}