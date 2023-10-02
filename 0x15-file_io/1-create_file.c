#include "main.h"

/**
 * _strlen - return
 * @s: strg
 * Return: int
*/
int _strlen(char *s)
{
	int = x;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * create_file - create a file
 * Description: description
 * @filename: name
 * @text_content: text
 * Retrun: 1 on success 0 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int x;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	x = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (x == -1)
		return (-1);
	if (l)
		b = write(x, text_content, l);
	close(x);
	return (b == l ? 1 : -1);
}
