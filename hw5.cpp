#include <stdio.h>

int func10_2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    func10_2(n / 2);
    printf("%d", n % 2);
}

int main(void)
{
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

    if (number == 0)
    {
        printf("0");
    }
    else
    {
        func10_2(number);
    }
    return 0;
}