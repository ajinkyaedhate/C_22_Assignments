// 5. Write a function to transform a string into lowercase

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void stringlower(char s[])
{
  int length = 0, i;
  for (i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] = s[i] + 32;
  }

  printf("%s", s);
}

int main()
{
  char s[100];
  printf("enter a string: ");
  fgets(s, 100, stdin);
  stringlower(s);

  return 0;
}