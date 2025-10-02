#include <stdio.h>
#include <string.h>

int main ()
{
    char a[1000];
    printf("enter your word :");
    scanf("%s",&a);

    int count =0;

    for (int i = 0; a[i] != '\0'; i++)
    {
      count +=1;
    }
  
  printf("there are %d words in this word" , count);

  return 0;
}


  
