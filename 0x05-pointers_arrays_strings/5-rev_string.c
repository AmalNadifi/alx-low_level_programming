#include "main.h"

/**
 * rev_string - the function reverses a string
 * @s: the string to be reversed
 * Return: no return value
 */

void rev_string(char *s)
{
	char rev_str = s[0];
	int a = 0;
	int x;

	do {
		a++;
	} while (s[a] != '\0');
	for (x = 0; x < a; x++)
	{
		a--;
		rev_str = s[x];
		s[x] = s[a];
		s[a] = rev_str;
	}
}
