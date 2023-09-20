// 3. Write a function to compare two strings.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void stringcompare(char s1[], char s2[])
{
  int i, count = 0;
  if (strlen(s1) == strlen(s2))
  {
    for (i = 0; s2[i] != '\0'; i++)
    {
      if (s1[i] == s2[i])
      {
        count = 0;
      }
      else if (s1[i] > s2[i])
      {
        count = 1;
      }
      else if (s1[i] < s2[i])
      {
        count = -1;
      }
    }
    if (count == 0)
      printf("strings are equal %d", count);
    else
      printf("strings are not equal %d", count);
  }
  else
    printf("strings are not equal in length");
}

int main()
{
  char s1[100], s2[100];
  int i, count = 0;

  printf("Enter  string1: ");
  gets(s1);
  printf("Enter  string2: ");
  gets(s2);
  stringcompare(s1, s2);

  return 0;
}