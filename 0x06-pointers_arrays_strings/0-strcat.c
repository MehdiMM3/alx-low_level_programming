#include "main.h"

/**
 * _strcat - function that concatinates two strings
 *
 * @dest: first pointer input
 * @src: second pointer input
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	char x = 0, y;

	while (dest[x])
		x++;

	for (y = 0; src[y]; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
