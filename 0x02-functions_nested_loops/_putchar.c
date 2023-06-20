#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the caracter c
 * @c: The caracter to print
 *
 * Return: On success 1, On error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
