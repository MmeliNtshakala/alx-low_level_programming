#include "main.h"

/**
 * get_endianness - checks endianess
 *
 * Return: 0 if true, 1 if false
 */
int get_endianness(void)
{
	int x = 1;
	return (x & 1);
}
