#include <stdio.h>

int main()
{
    char a[100];
    int b[100];

    printf("Enter word:");
    scanf("%s", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        b[i] = 0;

        for (int j = 0; a[j] != '\0'; j++)
        {
            if (a[i] == a[j])
            {
                b[i]++;
            }
        }
    }

    for (int i = 0; a[i] != '\0'; i++)
    {

        printf("%c is for %d times\n", a[i], b[i]);
    }

    return 0;
}