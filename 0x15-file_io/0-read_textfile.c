#include "main.h"

/**
 * read_textfile - read
 * @filename: name of file to read
 * @letters: nùbr of bytes
 * Return: the nmbr
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t b;
	char y[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	b = read(x, &y[0], letters);
	b = write(STDOUT_FILENO, &y[0], b);
	close(x);
	return (b);
}
