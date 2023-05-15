#include "main.h"
#include <stdlib.h>

/**
 * str_concat - the function concatenates two strings
 * @s1: the first string entered
 * @s2: the second string entered
 * Return: the resultant concat of string s1 and string s2
 * returns NULL (on failure)
 */

char *str_concat(char *s1, char *s2)
{
	int x, y, size1 = 0, size2 = 0;
	char *a_concat;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	do {
		size1++;
	} while (s1[size1] != '\0');

	do {
		size2++;
	} while (s2[size2] != '\0');

	a_concat = malloc((size1 + size2 + 1) * sizeof(char));

	if (a_concat == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
	{
		a_concat[x] = s1[x];
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		a_concat[x] = s2[y];
		x++;
	}

	a_concat[x] = '\0';

	return (a_concat);
}
