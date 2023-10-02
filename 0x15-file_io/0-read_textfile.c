#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads and prints file
 * @filename: path to file
 * @letters: chars
 *
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	int ret;
	char *hold;

	if (!filename)
		return (0);
	ret = open(filename, O_RDONLY);
	if (ret == -1)
		return (0);
	hold = malloc(letters);
	if (!hold)
		return (0);
	x = read(ret, hold, letters);
	if (x == -1)
		return (0);
	n = write(STDOUT_FILENO, hold, n);
	if (n == -1)
		return (0);
	close(ret);
	return (x);
}
