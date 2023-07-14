#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'possible number combos'
 * Return: always 0
 */
int main(void)
{
	int n = '0';
	int m = '0';
	int l = '0';

	for (l = '0'; l <= '9'; l++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (!((n == m) || (m == l) || (m > n) || (l > m)))
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (!(n == '9' && m == '8' && l == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
