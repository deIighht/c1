#include<stdio.h> 

int main(void)
{
	for (int i = 0; i < 5; i += 1)
	{
		for (int space = 0; space < (4-i); space+=1)
		{
			printf(" ");
		}
		for (int s=0;s<2*(i+1)-1;s+=1)
		{
			printf("*");
		}
		printf("\n");
	}
}