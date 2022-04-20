#include "main.h"

/**
 * _strlen - give the length of a string
 * @givenString: the string
 *
 * Return: the length of a string
 */
int _strlen(char *givenString)
{
	int i;

	for (i = 0 ; givenString[i] != '\0' ; i++)
		;
	return (i);
}
