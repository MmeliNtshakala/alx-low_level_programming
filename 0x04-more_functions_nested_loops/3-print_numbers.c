#Include "main.h"

/**
 * print_numbers - pront the numbers since 0 to 9
 * Return: The numbers since 0 to 9
 */
 void print_numbers(void)
 {
     int m;
     for (m = 0; m <= 9; m++)
     {
         _putchar(m + '0');
     }
     _putchar('\n');
 }
