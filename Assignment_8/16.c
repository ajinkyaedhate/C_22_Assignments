//     *        
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>

int main()
{
    int r, i, j, s;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    for (i = 1; i <= r; i++)
    {
        for (s = i; s < r; s++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * r - 1); j++)
        {
            if (i == r || j == 1 || j == 2 * i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
