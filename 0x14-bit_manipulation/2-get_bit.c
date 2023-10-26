#include "main.h"

/**
 * get_bit - returns the value of a bit to a given index
 * @n : number
 * @index: index within binary number
 *
 * Return: value if a bit 0 or 1, or -1 if false
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	bin = n >> index;
	bit = bin & 1;

	return (bit);

}
