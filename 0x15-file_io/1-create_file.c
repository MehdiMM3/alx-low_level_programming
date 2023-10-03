#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length of the string
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
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: text content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x;
	ssize_t b = 0, l;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);

	if (text_content)
	{
		l = _strlen(text_content);
		if (l)
			b = write(x, text_content, l);
	}

	close(x);
	return (b == l ? 1 : -1);
}
