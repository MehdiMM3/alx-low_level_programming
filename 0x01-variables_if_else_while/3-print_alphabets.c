#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: upper lower
 *
 * Return: 0 on success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
