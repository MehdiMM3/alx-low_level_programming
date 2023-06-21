#include "main.h"

/**
 * times_table - prints the tables
*/

void times_table(void)
{
	int nmbr, a, b;

	for (nmbr = 0; nmbr <= 9; nmbr++)
	{
		_putchar(48);
		for (a = 1; a <= 9; a++)
		{
			_putchar(',');
			_putchar(' ');

			b = nmbr * a;

			/**
			 * put space if a product is a single number
			 * place tha first digit if its two numbers
			*/
			if (b <= 9)
				_putchar(' ');
			else
				_putchar((b / 10) + 48); /*get the first digit*/

			_putchar((b % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
