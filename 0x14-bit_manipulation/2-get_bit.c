#include "main.h"

/**
 * get_bit - returns the value of a bit to a given index
 * @n : number
 * @x: index within binary number
 *
 * Return: value if a bit 0 or 1, or -1 if false
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit, bin;

	if (x > (sizeof(unsigned long int) *8))
		return (-1);
	
	bin = n >> x;
	bit = bin & 1;

	return (bit);

}
