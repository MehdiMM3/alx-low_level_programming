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
	for (; *str != '\0'; *str++)
		_putchar(*str);
	_putchar('\n');
}
