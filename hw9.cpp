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
	printf("���ڿ��� �Է��ϼ���: ");
	fgets(input, sizeof(input), stdin);

	convCase(input);
	printf("��ȯ�� ���ڿ�: %s", input);
	return 0;
	//���ۿ� \n�� ���� ����.
}