#include "main.h"

/**
 * clear_bit - clear bit to 0 at given
 * @n : number
 * @index : within binary number
 *
 * Return : 1 if true, or 0 if false
 */

int clear_bit(unsigned long int *n, unsigned long int index)
{
	unsigned long int x = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	x = ~(x << index);
	*n = *n & x;

	return (1);
}
