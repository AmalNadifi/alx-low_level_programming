#include "main.h"

/**
 * *cap_string - the function capitalizes all words of a string
 * @a: string to capitalize all its words
 * Return: 0 (success)
 */

char *cap_string(char *a)
{
	int x = 0;

	while (a[x])
	{
		while (!(a[x] >= 'a' && a[x] <= 'z'))
			x++;

		if (a[x - 1] == ' ' ||
				a[x - 1] == '\t' ||
				a[x - 1] == '\n' ||
				a[x - 1] == ',' ||
				a[x - 1] == ';' ||
				a[x - 1] == '.' ||
				a[x - 1] == '!' ||
				a[x - 1] == '?' ||
				a[x - 1] == '"' ||
				a[x - 1] == '(' ||
				a[x - 1] == ')' ||
				a[x - 1] == '{' ||
				a[x - 1] == '}' ||
				x == 0)
			a[x] = a[x] - 32;

		x++;
	}
	return (a);
}
