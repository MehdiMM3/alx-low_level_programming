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

	/*find the size of dest array*/
	while (dest[x])
		x++;

	/*iterate through each src array  value without the null type*/
	for (y = 0; src[y]; y++)
	{
		/*append src[y] to dest[x] while overwritting the null type in dest*/
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
