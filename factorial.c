#include <stdio.h>

int main()
{

	int a;

	printf("ENTER NUMBER TO FINT FACTORIAL:");
	scanf("%d", &a);
	if (a == 0)
	{
		a = 1;
	}

	else if (a < 0)
	{
		printf("FACTORIAL IS NOT DEFINE FOR NEGATIVE NUMBER");
	}

	else
	{

		int i;
		for (i = a; i > 1; i--)
		{
			a = a * (i - 1);
		}

		printf("FACTORIAL IS %d", a);
	}

	return 0;
}
