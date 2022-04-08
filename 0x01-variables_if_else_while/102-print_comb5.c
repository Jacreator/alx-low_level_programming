#include <stdio.h>

/**
* main - prints all dobule digit numbers of
* numbers
* Return: 0
*/
int main(void)
{
	int number;
	int secondNumber;

	for (number = 0; number < 100; number++)
	{
		for (secondNumber = 0; secondNumber < 100; secondNumber++)
		{
			if (secondNumber > number)
			{
				putchar((number / 10) + 48);
				putchar((number % 10) + 48);
				putchar(' ');
				putchar((secondNumber / 10) + 48);
				putchar((secondNumber % 10) + 48);
				if (number != 98 || secondNumber != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
