#include "main.h"

/**
 * read_textfile - read file
 * @filename: name
 * @letters: number
 * Return: bytes numb
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t y;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	y = read(x, &buf[0], letters);
	y = write(STDOUT_FILENO, &buf[0], y);
	close(x);
	return (y);
}
