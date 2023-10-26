#include "main.h"

/**
 * print_binary - numb print
 * @n: numb
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int hg = sizeof(n) * 8, y = 0;

	while (hg)
	{
		if (n & 1L << --hg)
		{
			_putchar('1');
			y++;
		}
		else if (y)
			_putchar('0');
	}
	if (!y)
		_putchar('0');
}
