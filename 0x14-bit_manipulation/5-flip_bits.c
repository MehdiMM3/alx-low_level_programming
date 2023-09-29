#include"main.h"
#include <stdio.h>

/**
 * flip_bits - Returns the number of bits.
 * @n: first numb.
 * @m: second numb.
 * Return: numb of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	unsigned int e = 0;

	while (f > 0)
	{
		e += f & 1;
		f >>= 1;
	}
	return (e);
}
