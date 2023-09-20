// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[] = "ajinkyaedhate111@gmail.com";
  int a = 0, d = 0, sc = 0;
  int i;
  for (i = 0; s[i] != '\0'; i++)
  {
    if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
      a++;
    if (s[i] >= 48 && s[i] <= 57)
      d++;
    if (s[i] >= 32 && s[i] <= 47 || s[i] >= 58 && s[i] <= 64 || s[i] >= 91 && s[i] <= 96 || s[i] >= 123 && s[i] <= 126) // 32–47 / 58–64 / 91–96 / 123–126
      sc++;
  }

  printf("no of alphabets are : %d \n", a);

  printf("no of digits are : %d \n", d);
  printf("no of special characters  are : %d \n", sc);

  return 0;
}