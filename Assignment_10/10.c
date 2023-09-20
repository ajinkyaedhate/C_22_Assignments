//10. find the all prime factors of given number.
#include <stdio.h>
#include <math.h>
void prime_factors(int num)
{
    int i, j;
    while (num != 1)
    {

        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
            {
                num = num / i;
                printf("%d ", i);
                break;
            }
        }
    }
}
int main()
{
    int num;
    printf("Enter number of which you want to find its prime factors : ");
    scanf("%d", &num);
    printf("Prime factors are\n ");
    prime_factors(num);

    return 0;
}