#include <stdio.h>

/*
 * main - Entry point
 *
 * Description: print lower and upper case alphabet
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a', ch1 = 'A';

	while (ch <= 'z' && ch1 <= 'Z')
	{
		putchar(ch);
		putchar(ch1);
		ch++;
		ch1++;
	}
	putchar('\n');

	return (0);
}
