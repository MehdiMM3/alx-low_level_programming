#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: first pointer input
 * @s2: second pointer input
 *
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (*s1)
	{
		if(*s1 != *s2)
		{
			r = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (r);
}
