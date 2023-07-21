#include "main.h"

/**
 * _isdigit.c- checks for digits.
 * @i: input character.
 * Return: 1 if is an uppercase character, 0 in other case.
 */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
		return (0);
}
