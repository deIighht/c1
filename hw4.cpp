#include<stdio.h>

int main(void)
{
	int a = 0;
	int a1 = 0;
	printf("Please enter a number: ");
	scanf_s("%d", &a);
	for (int i = 2; i * i <= a; i++)
	{
		if (a % i == 0)
		{
			a1++;
		}
		else
		{
			continue;

		}
	}
	if (a1 == 0)
	{
		printf("It is a prime number");
	}
	else
	{
		printf("It is not a prime number");
	}

}