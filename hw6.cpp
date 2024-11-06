#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5개의 정수를 입력받음
int main(void)
{
	int five_number[5] = {};
	printf("5개의 정수 입력: ");
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &five_number[i]);
	}

	int odd_num[5] = {};
	int even_num[5] = {};
	int odd_idx = 0;
	int even_idx = 0;
	for (i = 0; i < 5; i++)
	{
		if (five_number[i] % 2 != 0)
			odd_num[odd_idx++] = five_number[i];
		else
			even_num[even_idx++] = five_number[i];
	}

	printf("Odd number: ");
	for (i = 0; i < odd_idx;i++)
		printf("%d ", odd_num[i]);
	printf("\n");
	printf("Even number: ");
	for (i = 0; i < even_idx;i++)
		printf("%d ", even_num[i]);
	return 0;
}



//홀수와 짝수 구분


//출력