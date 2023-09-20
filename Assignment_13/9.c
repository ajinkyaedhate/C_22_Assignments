// 9. Write a program in C to count the digits of a given number using recursion.

#include <stdio.h>
#include <math.h>

int countdigit(int n, int count)
{
  if (n == 0)
    return 0;
  return countdigit(n / 10, count) + count++;
}
int main()
{
  int n = 12034500;
  int count = 1, digits;
  digits = countdigit(n, count);
  printf("%d", digits);

  return 0;
}