#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid
 *        passwords for the program 101-crackme.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int sum = 2772;
    int n;

    srand(time(0));
    while (sum)
    {
        n = rand() % 94;
        n += 33;

        while (n == 96 || n == 124)
        {
            n = rand() % 94;
            n += 33;
        }

        if (sum - n >= 0)
        {
            sum -= n;
            putchar(n);
        }
    }
    putchar('\n');

    return (0);
}
