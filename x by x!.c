#include <stdio.h>

int main ()
{
  int a ;
  float c ,sum;
  printf("ENTER NUMBER TO PRINT SERIES :");
  scanf("%d" , &a);

  float arr[1000][1000];

 for (int j = 1; j <=a; j++)
 {   int b=1 ;

     for (int i = 1; i <= j; i++)
   {
     b=b*i;

     c=(float)j/b;
    }
     arr[j-1][j-1] = c;
     printf("%f\n",c);
 }

for (int j = 0; j <a; j++)
 {   
   
    sum+=arr[j][j];
   
 }
 printf("%f", sum);
  return 0;
}