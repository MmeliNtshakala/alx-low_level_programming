#include "main.h"

/**
 * print_binary - integer to binary
 * @x: unsigned int
 *
 * Return: binary
 */

void print_binary(unsigned long int x)
{
	if (x > 1)
		print_binary(x >> 1);
	_putchar((x & 1) + '0');
}
