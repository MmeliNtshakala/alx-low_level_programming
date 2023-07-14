#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'sinle digi combos'
 * Return: always 0
 */
int main(void)
{
	int n, m;

	for (n  = 0;  m < 100; m++)
	{
		if (n < m)
		{
			putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			putchar(' ');
			putchar((m / 10) + 48);
			putchar((m % 10) + 48);
			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
