#include"main.h"

/**
 * print_alphabet - the alphabet a - z
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);

	putchar('\n');
}
