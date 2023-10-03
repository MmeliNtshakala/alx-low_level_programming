#include "main.h"

/**
 * main - copies ontent
 * @num: num of args
 * @arg: arguements
 *
 * Return: 0
 */
int main(int num, char **arg)
{
	int res_from, res_to;
	ssize_t x_from, x_to;
	char *from = NULL, *to = NULL, buffer[1024];

	if (num != 3)
		error(97, from, to);
	from = arg[1];
	to = arg[2];
	res_from = open(from, O_RDONLY);
	if (res_from == -1)
		error(98, from, to);
	res_to = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (res_to == -1)
		error(99, from, to);
	do {
		x_from = read(res_from, buffer, 1024);
		if (x_from == -1)
			error(98, from, to);
		x_to = write(res_to, buffer, x_from);
		if (x_to == -1)
			error(99, from, to);
	} while (x_from > 0);
	x_from = close(res_from);
	x_to = close(res_to);
	if (x_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %i\n", res_from);
		exit(100);
	}
	if (x_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %i\n", res_to);
		exit(100);
	}
	return (0);
}

/**
 * errors - prints all errors
 * @x: exit
 * @from: filename
 * @to: holds filename
 */
void errors(int x, char *from, char *to)
{
	switch (x)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			break;
	}
	exit(x);
}

