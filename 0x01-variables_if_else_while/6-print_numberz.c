#include <stdio.h>

/**
* main - prints all single digit numbers of
* base 10
* Return: 0
*/
int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
