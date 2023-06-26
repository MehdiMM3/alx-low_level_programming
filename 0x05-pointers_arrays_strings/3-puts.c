#include "main.h"

/**
 * _puts - print a string followed by a new line, to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	int x;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
