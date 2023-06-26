#include "main.h"

/**
 * swap_int - swap the value of a and b
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
