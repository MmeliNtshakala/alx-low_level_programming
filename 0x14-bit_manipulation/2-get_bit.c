#include "main.h"

/**
 * get_bit- returns bit to a given index
 * @n: numbers
 * @index: index in bunary number
 *
 * Return: value of a bit 0 or 1, or -1 if false
 */
int get_bit(unsigned lng int n, unsigned int index)
{
	int x;
	int y;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	y = n >> index;
	x = y & 1;

	return (x);
}
