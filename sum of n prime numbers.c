#include <stdio.h>

int main()
{
    int a = 100000, b = 1, c = 0, sum = 0, d;

    printf("how many prime number should be added :");
    scanf("%d", & d);
    for (int k = 3; k < a; k++)
    {
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                b = 0;
                break;
            }

            else
            {
                b = 1;
            }
        }

        if (b)
        {
            if (c < d - 1)
            {
                c++;
                sum += k;
                // printf(" %d is prime \n", k);

            }
        }

    }
    printf("sum 0f first %d prime numbers is %d.", c + 1, sum + 2);
    return 0;
}