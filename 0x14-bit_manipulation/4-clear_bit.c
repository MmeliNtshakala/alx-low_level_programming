#include "main.h"

/**
 * clear_bit- sets the value of a given bit 0
 * @n: number change
 * @index: index to clear
 *
 * Return: 1 if true, -1 if false
 */

int clear_bit(unsigned long int  *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
