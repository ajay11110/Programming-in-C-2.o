#include <stdio.h>

int main ()
{
int a;

printf("ENTER HOW MANY LINES YOU WANT TO PRINT :");
scanf("%d", &a);

for (int i = 0; i < a; i++)
{   for (int j = 0; j <= i; j++)
    {
        printf("%d\t", i+1);
    }
    printf("\n");
    
}
  return 0;
}

  
