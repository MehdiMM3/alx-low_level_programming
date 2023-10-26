#include "main.h"

/**
 * flip_bits - return fliped numb of bites
 * @n: numb1
 * @m: numb2
 * Return: numb
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int th = n ^ m;
	unsigned int ph = 0;

	while (th)
	{
		if (th & 1ul)
			ph++;
		th = th >> 1;
	}
	return (ph);
}
