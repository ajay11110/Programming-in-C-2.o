#include <stdio.h>

int main()
{
	int a, b, c;

	printf("ENTER NUMBER:\n");
	scanf("%d", &a);
	c = a;
	for (b = 0; a != 0; b++)
	{
		printf("ENTER NUMBER:\n");
		scanf("%d", &a);

		c = c + a;
	}
	printf("SUM IS %d\n", c);

	return 0;
}
