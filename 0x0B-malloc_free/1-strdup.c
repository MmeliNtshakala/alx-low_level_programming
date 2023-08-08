#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *newString;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (i = 0; str[i] != '\0'; i++)
		size++;

	newString = (char *) malloc(sizeof(char) * (size + 1));

	if (newString == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		newString[i] = str[i];
	newString[size] = '\0';

	return (newString);
}
