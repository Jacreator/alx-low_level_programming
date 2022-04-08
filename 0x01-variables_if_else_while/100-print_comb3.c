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

	for (number = 48; number <= 56; number++)
	{
		for (secondNumber = 49; secondNumber <= 57; secondNumber++)
		{
			if (secondNumber > number)
			{
				putchar(number);
				putchar(secondNumber);
				if (number != 56 || secondNumber != 57)
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
