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
	int x;
	char *buff;
	ssize_t bytes, y;

	if (!filename)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
	{
		close(x);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(x);
		return (0);
	}

	bytes = read(x, buff, letters);

	if (bytes == -1)
	{
		close(x);
		free(buff);
		return (0);
	}

	y = write(STDOUT_FILENO, buff, bytes);

	if (y == -1)
	{
		close(x);
		free(buff);
		return (0);
	}
	close(x);
	return (bytes);
}


