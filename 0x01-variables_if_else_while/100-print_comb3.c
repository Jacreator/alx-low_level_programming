#include <stdio.h>

/**
* main - prints all dobule digit numbers of
* numbers
* Return: 0
*/
int main(void)
{
	int number = 48;
	int secondNumber = 49;

	while (number < 56)
	{
		while (secondNumber <= 57)
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
			secondNumber++;
		}
		number++;
	}
	putchar('\n');
	return (0);
}
