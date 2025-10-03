#include <stdio.h>

int main()
{
    int a, b;

    printf("enter number of rows:");
    scanf("%d", &a);

    printf("enter number of columns:");
    scanf("%d", &b);

     int mat[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("enter number in (%d,%d):", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}