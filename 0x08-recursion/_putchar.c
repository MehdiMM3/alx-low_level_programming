#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character
 * Return 1 on success
 * On error -1 is returned, and errno is set appropirately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
