#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @number: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int number)
{
	int digit;

	if (number < 0)
		number = -number;

	digit = number % 10;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');

	return (digit);
}
