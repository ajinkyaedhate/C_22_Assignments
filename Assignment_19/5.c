// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[5][50];
    char valid[5][50];
    char invalid[5][50];

    int i, j, n, k = 0, l = 0;
    int found=0;
    printf("how many email address you want to add in list: \n");
    scanf("%d", &n);

    printf("Enter the %d emails:\n", n);
    for (i = 0; i < n ; i++)
    {
        scanf("%s", s[i]);
    }

    printf("your entered emails are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s  ", s[i]);
    }

        for (i = 0; i < n ; i++)
        {    
            found=0;
            for (j = 0; s[i][j] != '\0'; j++)
            {
                if (s[i][j] == '@')
                {
                    found=1;
                    strcpy(valid[k], s[i]);
                    // printf("%s ",valid[i]);
                    k++;
                }
            }
            if(found==0){
                strcpy(invalid[l], s[i]);
                l++;
            }
        }
       // printf("\n\n%d %d %d \n", i, j, k);
        printf("\nValid emails are:\n");
        for (i = 0; i < k; i++)
        {
            // printf("%s  ",valid[i]);
            puts(valid[i]);
        }

           printf("\ninvalid emails are:\n");
        for (i = 0; i < l; i++)
        {
            // printf("%s  ",valid[i]);
            puts(invalid[i]);
        }

        return 0;
    }