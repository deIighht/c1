#include<stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("2개의 정수 입력\n");
	scanf_s("%d %d", &num1, &num2);
	printf("Input two integers: %d %d\n", num1, num2);
	printf("%d & %d = %d\n", num1, num2, num1 & num2);
	printf("%d | %d = %d\n", num1, num2, num1 | num2);
	printf("%d ^ %d = %d\n", num1, num2, num1 ^ num2);
}