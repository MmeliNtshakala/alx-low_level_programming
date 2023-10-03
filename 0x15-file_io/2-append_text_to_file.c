#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: file name
 * @text_conted: text content
 *
 * Return: 1 if true -1 if false
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int res;
	ssize_t x;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	res = open(filename, O_RDWR | O_APPEND);
	if (res == -1)
		return (-1);
	x = write(ret, text_content, strlen(text_content));
	if (x == -1)
		return (-1);
	return (1);
}
