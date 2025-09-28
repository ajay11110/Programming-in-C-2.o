#include <stdio.h>

int main()
{
	int n ;
    printf("How many numbers do you want to compair:");
    scanf("%d", &n);
    int d[n];
    
    for(int i=0; i<n; i++)
    {
	  printf(" %d. ENTER NUMBER :",i+1);
      scanf("%d", &d[i]);
    
    }
    
    for (int j=0;j<n-1;j++)
    {
      if(d[j]>d[j+1])
      {
        int t=d[j];
        d[j]=d[j+1];
        d[j+1]=t;
        
      }
    }
    
    printf("%d is greatest among them",d[n-1]);
    
	return 0;
}