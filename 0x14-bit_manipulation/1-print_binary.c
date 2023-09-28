#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts int to binary
 * @x: unsigned int
 *
 * Return: binary
 */
void print_binary(unsigned long int x)
{
	if (x > 1)
		print_binary(n >> 1);

	_putchar((x & 1) + '0');
}
