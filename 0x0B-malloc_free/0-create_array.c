#include "main.h"

/**
 * create_array - the function creates an array of chars
 * and initializes it with a specific char
 * @size: the variable states the size of our array
 * @c: character to initialize
 * Return: NULL if size is zero, else returns a pointer to the array
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (size == 0 || a == 0)
	{
		return (0);
	}

	while (size--)
	{
		a[size] = a;
	}
	return (a);
}
