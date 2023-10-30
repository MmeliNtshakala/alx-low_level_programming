#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile- reads prints file
 * @filename: path to file
 * @letters: chars
 *
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	int y;
	char *holding;

	if (!filename)
		return (0);
	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);
	holding = malloc(letters);
	if (!holding)
		return (0);
	x = read(y, hilding, letters);
	if (x == -1)
		return (0);
	x = write(STDOUT_FILENO, holding, x);
	if (x == -1)
		return (0);
	close(y);
	return (x);
}
