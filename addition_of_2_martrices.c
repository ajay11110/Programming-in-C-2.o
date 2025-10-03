#include <stdio.h>

int main()
{
    int a, b;

    printf("enter number of rows:");
    scanf("%d", &a);

    printf("enter number of columns:");
    scanf("%d", &b);

    int mat1[a][b], mat2[a][b];

    printf("for first matrix\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("for second matrix\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("first matrix is-\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat1[i][j]);
        }

        printf("\n");
    }

    printf("second matrix is-\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat2[i][j]);
        }

        printf("\n");
    }

    printf("sum of both matrices is-\n");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat1[i][j] + mat2[i][j]);
        }

        printf("\n");
    }
    return 0;
}