#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the function returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: our string as input
 * Return: the duplicated string ( on success),
 * return NULL if str is null or insufficient memory is available
 */

char *_strdup(char *str)
{
	int x, size = 0;
	char *str_dup;

	if (str == 0)
	{
		return (0);
	}

	do {
		size++;
	} while (str[size] != '\0');

	str_dup = malloc(size * sizeof(*str));

	if (str_dup == 0)
	{
		return (0);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			str_dup[x] = str[x];
		}
	}
	return (str_dup);
}

