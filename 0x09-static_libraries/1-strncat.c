#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: first pointer input
 * @src: second pointer input
 * @n: number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] !=  '\0'; y++)
		dest[x + y] = src[y];

	dest[x + y] = '\0';

	return (dest);
}
