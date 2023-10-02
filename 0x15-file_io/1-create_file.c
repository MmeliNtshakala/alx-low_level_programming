#include "main.h"

/**
 * create_file - creates files
 * @filename: name of file
 * @text_content: content in text
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int y;
	ssize_t x;

	if (!filename)
		return (-1);
	y = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (y == -1)
		return (-1);
	x = write(y, text_content, strlen(text_content));
	if (x == -1)
		return (-1);
	close(y);
	return (1);
}
