#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter number of rows:");
    scanf("%d", &a);

    printf("enter number of columns:");
    scanf("%d", &b);

    printf("enter number of matrices:");
    scanf("%d", &c);

    int mat[c][a][b];

    for (int k = 0; k < c; k++)
    {
        printf("for matrix no. %d\n", k + 1);

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("enter number in (%d,%d):", i, j);
                scanf("%d", &mat[k][i][j]);
            }
        }
    }

    for (int k = 0; k < c; k++)
    {
        printf("matrix no. %d is-\n", k + 1);

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d\t", mat[k][i][j]);
            }

            printf("\n");
        }
    }

    printf("sum of all matrices is-\n");

    for (int k = 0; k < c - 1; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                mat[k + 1][i][j] = mat[k][i][j] + mat[k + 1][i][j];
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat[c-1][i][j]);
        }

        printf("\n");
    }

    return 0;
}