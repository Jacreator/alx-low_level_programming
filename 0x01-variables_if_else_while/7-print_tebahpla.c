#include <stdio.h>

/**
* main - print the alphabet in lowercase and uppercase,
* followed by a new line using putchar function
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
