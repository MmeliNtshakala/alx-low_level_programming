#include "main.h"

/**
 * binary_unit - convert binary to int
 * @binary : binary
 *
 * Return: unsighned int
 */
unsigned int binary_unit(const char *binary)
{
	int x = 0, y;
	unsigned int num = 0, non_binary = 0;

	if (binary == NULL)
		return (non_binary);


	while (binary[x] != '\0')
		x++;
	x -= 1;
	y = 0;
	while (binary[y])
	{
		if ((binary[y] != '0') && (binary[y] != '1'))
			return (non_binary);

		if (binary[y] == '1')
			num += (1 * (1 << x));
		y++;
		x--;
	}
	return (num);
}
