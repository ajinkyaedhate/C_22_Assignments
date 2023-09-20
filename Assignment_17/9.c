// 9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>
void main()
{
  char str[100], ch;
  int i, j, l;

  printf("\nenter a string : ");
  fgets(str, sizeof str, stdin);
  l = strlen(str);

  for (i = 0; i < l - 1; i++)
    for (j = i; j < l; j++)
      if (str[i] > str[j])
      {
        ch = str[j];
        str[j] = str[i];
        str[i] = ch;
      }
  printf("After sorting the string appears like : ");
  printf("%s\n", str);
}
