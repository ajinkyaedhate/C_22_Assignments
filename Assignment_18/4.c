// 4. Write a function to transform string into uppercase

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void stringupper(char s[])
{
  int length = 0, i;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] = s[i] - 32;
  }

  printf("%s", s);
}

int main()
{
  char s[100];
  printf("enter a string: ");
  fgets(s, 100, stdin);
  stringupper(s);

  return 0;
}