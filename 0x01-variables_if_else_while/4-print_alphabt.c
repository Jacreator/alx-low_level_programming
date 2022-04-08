#include <stdio.h>

/**
* main - print the alphabet in lowercase and uppercase,
* followed by a new line using putchar function
* Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
