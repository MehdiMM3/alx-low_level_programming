#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + 48);

	putchar('\n');

	return (0);
}
