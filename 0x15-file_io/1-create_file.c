#include "main.h"

/**
 * create_file- creates files
 * @filename: file name
 * @text_content: content in text
 *
 * Return: 1 if true, -1 i false
 */
int create_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(x, text_content, length);
	if (x == -1 || y == -1)
		return (-1);
	close(x);
	return (1);
}

