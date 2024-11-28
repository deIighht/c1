#include <stdio.h>

void convCase(char str[])
{
	const int diff = 'a' - 'A';
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
		
	}
}
int main()
{
	char input[100];
	printf("문자열을 입력하세요: ");
	fgets(input, sizeof(input), stdin);

	convCase(input);
	printf("변환된 문자열: %s", input);
	return 0;
	//버퍼에 \n이 남는 문제.
}