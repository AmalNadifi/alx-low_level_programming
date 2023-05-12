#include "main.h"

/**
 * _strspn - the function that gets the lengt of a prefix substring
 * @s: our initial string
 * @accept: the string consisting of the prefix substring
 * Return: the number of bytes in the initial segment of s which consists
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
			{
				return (x);
			}
		}
	}
	return (x);
}
