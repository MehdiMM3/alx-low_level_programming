#include "main.h"

/**
 * *_strdup - return a pointer
 * @str: string
 * Return: 0
*/

char *_strdup(char *str);
{
	int i = 0, s = 0;
	char = *m;
	
	if (str == '\0')
		return ('\0');

	for (; str[s] != '\0'; s++)
	;

	m = malloc(s * sizeof(*str) + 1);

	if (m == 0)
		return ('\0');
	else
	{
		for (; i < s; i++)
			m[i] = str[i];
	}
	return (m);
}
