#include "main.h"

/**
 * set_string - sets the valueof a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
