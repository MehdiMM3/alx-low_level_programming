#include "main.h"
#include <stdio.h>

/**
 * isLower - determines lowercase
 * @c: char
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
	{
		return (c >= 97 && c <= 122);
	}

/**
 * isDelimiter - determines delimitation
 * @c: char
 * Return: 1 if true, 0 if false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalises all words
 * @s: input string
 * Return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
		else if (isLower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++
	}
	return (ptr);

}
