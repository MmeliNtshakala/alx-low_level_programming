#include "main.h"

/**
 * append_text_to_file- append text to file
 * filename: file name
 * @text_content: text content
 *
 * Return: 1 if true or -1 if false
 */
int append_text_to_file(const char *filename. char *text_content)
{
	int result;
	ssize_t x;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	result = open(filename, O_RDWR | O_APPEND);
	if (result == -1)
		return (-1);
	x = write(result, text_content, strlen(text_content));
	if (x == -1)
		return (-1);
	return (1);
}
