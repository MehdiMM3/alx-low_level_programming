#include"main.h"

/**
 * print_alphabet_x10 - alphabet a - z 10 times
*/

void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (y = 'a' ; y <= 'z' ; y++)
			_putchar(y);
		_putchar('\n');
	}
}
