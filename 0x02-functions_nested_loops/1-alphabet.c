#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: alphabet with only putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alph;

	for(alph = 'a' ; alph <= 'z' ; alph++)
		putchar(alph);

	putchar('\n');
}
