#include <stdio.h>

int main()
{
	float a, b;
	int c;

	printf("ENTER FIRST NUMBER:");
	scanf("%f", &a);

	printf("ENTER SECOND NUMBER:");
	scanf("%f", &b);

	printf("ENTER YOUR OPRETION TYPE-\n");

	printf("1 FOR ADDITION\n");
	printf("2 FOR SUBTRACTION\n");
	printf("3 FOR MULTIPLICATION\n");
	printf("4 FOR DIVISION\n");

	scanf("%d", &c);

	switch (c)
	{
	case 1:
		printf("SUM OF BOTH NUMBERS IS %f", a + b);
		break;

	case 2:
		printf("SUBSTRACTION OF BOTH NUMBERS IS %f", a + b);
		break;

	case 3:
		printf("MULTIPLICATION OF BOTH NUMBERS IS %f", a * b);
		break;

	case 4:
		if (b == 0)
		{
			printf("erro!! denominator can not 0");
		}
		else
		{

			printf("QUOTIENT OF BOTH NUMBERS IS %f", a / b);
			
		}
		break;

	default:
		printf("PLEASE ENTER VALID CHOICE");
	}

	return 0;
}
