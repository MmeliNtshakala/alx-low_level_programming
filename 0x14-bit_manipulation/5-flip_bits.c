#include "main.h"

/**
 * flip_bits- returns number of bits that you fliped
 * @n: num 1
 * @m: num 2
 *
 * Return: number of bytes
 */
unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long int diff;
	int x;

	for (x = 0, diff = n ^ m; diff; diff >>= 1)
	{
		if (diff & 1)
			x++;
	}
	return (x);
}
