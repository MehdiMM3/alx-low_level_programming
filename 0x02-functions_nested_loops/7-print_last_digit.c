#include"main.h"

/**
 * print_last_digit - prints last digit
 *
 *@n: takes number imput
 *
 * return: Last digit
*/

int print_last_digit(int n)
{
	int z;

	if (n < 0)
		z = -1 * (n % 10);
	else
		z = n % 10;

	_putchar(z + '0');
	return (z);
}
