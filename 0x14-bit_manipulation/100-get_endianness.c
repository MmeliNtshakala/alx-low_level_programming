#include "main.h"

/**
 * get_endianness - checks endianess
 *
 * Return: 0 if true, 1 if false
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
