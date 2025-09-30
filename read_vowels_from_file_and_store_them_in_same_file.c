#include <stdio.h>
#include <string.h>

int main()
{
    FILE *a;
    a = fopen("test.txt", "r");

    char ch[100], che[100];

    fscanf(a, "%[^\n]", &ch);
    printf("%s\n", ch);

    int j = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
        {
            printf("%c", ch[i]);
            che[j] = ch[i];
            j++;
        }
    }
    che[j] = '\0';
    
    FILE *c;
    c = fopen("test.txt", "w");

    fprintf(c, "%s", che);

    fclose(a);
    fclose(c);

    return 0;
}