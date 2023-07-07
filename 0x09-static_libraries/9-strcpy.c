#include "main.h"

/**
 * *_strcpy - copies the string pointed
 * @dest: chat type string
 * @src: char type string
 * Description: copy the string to the buffer
 * Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
