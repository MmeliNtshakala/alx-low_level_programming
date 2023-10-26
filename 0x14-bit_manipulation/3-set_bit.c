#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: number
 * @index: index binary number
 *
 * Return: 1 if true, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(insigned long int) * 8))
		return (-1);

	x <<= index;

	*n = *n | x;
	return (1);
}
