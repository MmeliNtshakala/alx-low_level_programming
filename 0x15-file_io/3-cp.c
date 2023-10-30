#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer- allocares 1024 bytes for a buffer
 * @file: the name of buffer
 * Return: Apointer to a new buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprint(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file- close file descriptors
 * @fd : file discriptors
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main- cps the concepts of ile to another
 * @argc: number of arguments supplied to program
 * @argv: array of pointers to the program
 *
 * Return: 0 if true
 *
 * Description: if arg count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read- exit code 98.
 * if file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed- exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, reads, writes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	reads = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | OWRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || reads == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can'nt read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writes = write(to, buffer, reads);
		if (to == -1 || writes == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reads = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (reads > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
