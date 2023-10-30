#include "main.h"

/**
 * _strlen - strg length
 * @s: strg
 * Return: int
*/
int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * create_file - create file
 * @filename: name
 * @text_content: text
 * Return: 1 on success 0 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int x;
	ssize_t y = 0, qz = _strlen(text_content);

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);
	if (qz)
		y = write(x, text_content, qz);
	close(x);
	return (y == qz ? 1 : -1);
}
