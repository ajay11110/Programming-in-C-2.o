#include <stdio.h>

int main()
{
    int a;
    char c;

    printf("Enter number of lines:");
    scanf("%d", &a);

    printf("Enter symbol:");
    scanf(" %c", &c);

    for (int i = 0; i < a - 1; i++)
    {
        printf(" ");
    }
    printf("%c", c);
    printf("\n");

    for (int j = 1; j <= a - 2; j++)
    {
        for (int k = 1; k < a - j; k++)
        {
            printf(" ");
        }
        printf("%c", c);

        for (int l = 0; l < 2 * j - 1; l++)
        {
            printf(" ");
        }

        printf("%c", c);

        printf("\n");
    }

    for (int m = 0; m < 2 * a - 1; m++)
    {
        printf("%c", c);
    }

    return 0;
}
