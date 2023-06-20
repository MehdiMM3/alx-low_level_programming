#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 *@x: takes number imput
 *
 * return: Always 0 (success)
*/

int print_last_digit(int x)
{
	int z;

	if (x < 0)
		z = -1 * (x % 10);
	else
		z = x % 10;

	_purchar(z + '0');
	return (z);
}
