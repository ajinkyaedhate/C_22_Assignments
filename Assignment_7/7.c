// 7. Write a program to print all Prime numbers between two given numbers

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int a = 10, b = 50;
  int i, j;
  int flag = 0;
  for (i = a; i <= b; i++)
  {
    flag = 0;
    for (j = 2; j < i / 2; j++)
    {
      if (i % j == 0)
      {
        flag = 1;
        break;
      }
    }
      if (flag == 0)
        printf("%d ", i);
    }

    return 0;
  }