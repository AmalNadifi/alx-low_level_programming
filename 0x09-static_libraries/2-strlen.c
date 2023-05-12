#include "main.h"

/**
 * _strlen - the function return the length of a string
 * @s: string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
