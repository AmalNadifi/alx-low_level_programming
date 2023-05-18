#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - the function concatenates two strings
 * @s1: the firststring entered
 * @s2: the second string entered
 * @n: the number of bytes to concatenate from second string
 * Return: the resultant concat of the two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int x, y;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = 0;
	do {
		size1++;
	} while (s1[size1] != '\0');
	size2 = 0;
	do {
		size2++;
	} while (s2[size2] != '\0');

	concat = malloc(size1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		concat[x] = s1[x];
	}
	for (y = 0; y < n; y++)
	{
		concat[x] = s2[y];
		x++;
	}

	concat[x] = '\0';
	return (concat);
}
