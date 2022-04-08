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
	int thirdNumber;

	for (number = 48; number < 58; number++)
	{
		for (secondNumber = 49; secondNumber < 58; secondNumber++)
		{
			for (thirdNumber = 50; thirdNumber < 58; thirdNumber++)
			{
				if (thirdNumber > secondNumber && secondNumber > number)
				{
					putchar(number);
					putchar(secondNumber);
					putchar(thirdNumber);
					if (number != 55 || secondNumber != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
