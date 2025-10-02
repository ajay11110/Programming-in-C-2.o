#include <stdio.h>

int main()
{ int a;
  printf("Enter number to check armstrong or not:");
  scanf("%d", &a);
  int c=1 , d=0 , e=0;
  int b[3][1000];
  
  for(int i=1; 1;i++)
  {
  if (a/c==0)
  {
   break;
  }
  
  else
  {
   d++;
   c*=10;
  }
  }
  
  for(int j=0;j<d;j++)
  {
    b[0][j]=a/(pow(10,(d-j-1)));
    
  }
  
  for(int k=1;k<d;k++)
   {
   b[1][0]=b[0][0];
   b[1][k]=b[0][k]-b[0][k-1]*10;
   }
   
 
  for(int l=0;l<d;l++)
  {
    b[2][l]=pow(b[1][l],d);
    e+=b[2][l];
  }
  
  if(a==e)
  {
   printf("number is armstrong");
  }
  
  else
  {
   printf("number is not armstrong");
  }
	return 0;
}
