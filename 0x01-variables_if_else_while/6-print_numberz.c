#include <stdio.h>

/**
* main - prints all single digit numbers of
* base 10
* Return: 0
*/
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
