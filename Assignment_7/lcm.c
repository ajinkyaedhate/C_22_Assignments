
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1 = 60, n2 = 72;
    int lcm = 0;
    int i = 0, j = 0;

    for (i = 2; i < n1 * n2; i++)
    {

        if (i % n1 == 0 && i % n2 == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("\n%d", lcm);

    return 0;
}