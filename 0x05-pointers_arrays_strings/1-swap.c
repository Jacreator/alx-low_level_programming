#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @firstInteger: integer 1
 * @secondInteger: integer 2
 *
 **/
void swap_int(int *firstInteger, int *secondInteger)
{
	int holder = *firstInteger;

	*firstInteger = *secondInteger;
	*secondInteger = holder;
}
