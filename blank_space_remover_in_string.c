#include <stdio.h>
#include <string.h>

int main()
{
    int c = 0, d = 0, e;
    char a[100];

    printf("Enter word:");
    scanf(" %[^\n]", a);

    for (int j = 0; a[j] != '\0'; j++)
    {
        if (a[j] == ' ')
        {
            c++;
        }
        d++;
    }

    for (int i = 0, j = 0; a[i] != '\0'; i++)
    {
        if (a[i] != ' ')
        {
            a[j] = a[i];
            j++;
        }
    }

    a[d - c] = '\0';

    printf("word is %s \n", a);

    return 0;
}