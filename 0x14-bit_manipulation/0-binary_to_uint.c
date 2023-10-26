#include "main.h"

/**
 * binary_to_uit- converts a binary to usigned unit
 * @b: binary number
 *
 * Return: number
 */

unsigned int binary_to_uit(const char *b)
{
	int x;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		value = 2 * value + (b[x] - '0');
	}
	return (value);
}
