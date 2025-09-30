#include <stdio.h>
#include <string.h>

struct collage
{
    char name[3][100][100];
    int age[3][100];
    char branch[3][100][100];
    char pro[3][100][100];
};

int main()
{

    int a, b, c;

    struct collage kkr;

    strcpy(kkr.pro[0], "Student");
    strcpy(kkr.pro[1], "Teacher");
    strcpy(kkr.pro[2], "Other Staff");

    printf("enter no of students :");
    scanf("%d", &a);

    printf("enter details of student\n");

    for (int i = 0; i < a; i++)
    {
        printf("enter name:");
        scanf("%s", kkr.name[0][i]);

        printf("enter branch:");
        scanf("%s", kkr.branch[0][i]);

        printf("enter age:");
        scanf("%d", &kkr.age[0][i]);

        printf("\n");
    }

    printf("enter no of teachers :");
    scanf("%d", &b);

    printf("enter details of teacher\n");

    for (int i = 0; i < b; i++)
    {
        printf("enter name:");
        scanf("%s", kkr.name[1][i]);

        printf("enter branch:");
        scanf("%s", kkr.branch[1][i]);

        printf("enter age:");
        scanf("%d", &kkr.age[1][i]);

        printf("\n");
    }

    printf("enter no of workers :");
    scanf("%d", &c);

    printf("enter details of other staff\n");

    for (int i = 0; i < c; i++)
    {
        printf("enter name:");
        scanf("%s", kkr.name[2][i]);

        printf("enter branch:");
        scanf("%s", kkr.branch[2][i]);

        printf("enter age:");
        scanf("%d", &kkr.age[2][i]);

        printf("\n");
    }

    printf("student details\n");

    for (int i = 0; i < a; i++)
    {
        printf("name is %s\n", kkr.name[0][i]);
        printf("age is %d\n", kkr.age[0][i]);
        printf("branch is %s\n", kkr.branch[0][i]);

        printf("\n");
    }

    printf("teachers details\n");

    for (int i = 0; i < b; i++)
    {
        printf("name is %s\n", kkr.name[1][i]);
        printf("age is %d\n", kkr.age[1][i]);
        printf("branch is %s\n", kkr.branch[1][i]);

        printf("\n");
    }

    printf("other staff details\n");

    for (int i = 0; i < c; i++)
    {
        printf("name is %s\n", kkr.name[2][i]);
        printf("age is %d\n", kkr.age[2][i]);
        printf("branch is %s\n", kkr.branch[2][i]);

        printf("\n");
    }

    return 0;
}