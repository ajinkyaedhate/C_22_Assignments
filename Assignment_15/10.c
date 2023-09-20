#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void frequencycount(int a[], int n)
{
  int hash[200] = {0};
  int i;
  for (i = 0; i < n; i++)
  {
    hash[a[i]]++;
  }

  printf("element\t     frequency\n");

  for (i = 0; i < 200; i++)
  {
    if (hash[i] > 0)
      printf("%d\t--->\t%d \n", i, hash[i]);
  }
}

int main()
{
  int a[] = {1, 2, 3, 4, 3, 5, 6, 7, 8, 9, 9, 8, 7, 6, 54, 4, 3, 3, 1};
  int n = sizeof(a) / sizeof(a[0]);
  frequencycount(a, n);

  return 0;
}