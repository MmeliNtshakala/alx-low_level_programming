#include <unistd.h>

/**
 * _putchar - writes the character m to stout
 * @m : The character to print
 * 
 * Return: On success 1.
 * On error: -1 is returned, and error is set appropriately 
 */
 int _putchar(char m)
 {
    return(write(1, &m, 1));
 }
