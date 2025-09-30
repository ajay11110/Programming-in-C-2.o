#include <stdio.h>
#include <string.h>

int main()
{
    FILE *a;
    a = fopen("test.txt", "r");

    char ch[100];

    fscanf(a, "%[^\n]", &ch);
    printf("%s", ch);

    return 0;
}