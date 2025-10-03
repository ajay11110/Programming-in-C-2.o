#include <stdio.h>

int main()
{
	int n, sum = 0, i;
	//	b=a;
	printf("ENTER NUMBER TO SUM TILL IT:");
	scanf("%d", &n);

	while (n > 0)
	{
		sum = sum + n;
		n--;
	}
	printf("SUM OF FIRST n NUMBERS IS %d", sum);

	return 0;
}
