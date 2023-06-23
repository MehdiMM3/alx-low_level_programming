#include <stdio.h>

/**
 * _sq - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sq(double x)
{
	float sq, t;

	sqrt = x / 2;
	t = 0;

	while (sq != t)
	{
		t = sq;
		sq = (x / t + t) / 2;
	}
	return (sq);
}

/**
 * largest_prime_factor - finds and prints larg num
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int p, lar;

	/*first divide*/
	while (num % 2 == 0)
		num = num / 2;

	/*num must be odd*/
	for (p = 3; p <= _sq(num); p += 2)
	{
		while (num % p == 0)
		{
			num = num / p;
			lar = p;
		}
	}

	if (num > 2)
		lar = num;
	printf("%d\n", lar);
}

/**
 * main - Entry point
 *
 * Return:  Always 0 (success)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
