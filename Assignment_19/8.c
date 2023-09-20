// 8. Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 2 )

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char s[6][10] = {"the", "quick", "brown", "fox", "quick", "black"};
  char word1[10] = "the";
  char word2[10] = "fox";
  int i, j, count = 0;
  int n, flag = 0;

  n = sizeof(s) / sizeof(s[0]);

  for (i = 0; i < n; i++)
  {
    if (strcmp(s[i], word1) == 0)
    {
      printf("%d\n", i);
      for (j = 0; j < n; j++)
      {

        if (strcmp(s[j], word2) == 0)
        {
          flag = 1;
          break;
        }
      }
      break;
    }
  }
  printf("%d\n", j);
  if (flag)
  {
    if (i == j)
    {
      printf("both the words are same\n");
    }
    else
      printf("\ndistance = %d\n", abs(j - i) - 1);
  }
    else printf("Either or both the word are missing");

    return 0;
  }