#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : task 2
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	else if (s == 0)
		printf("Last digit of %d is %d and is 0\n", n, s);
	else if (s < 6 && s != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	return (0);
}
