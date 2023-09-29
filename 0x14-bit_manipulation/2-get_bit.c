#include"main.h"
#include <stdio.h>

/**
 * get_bit - Gets the value of a bit.
 * @n: The number.
 * @index: The index.
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
