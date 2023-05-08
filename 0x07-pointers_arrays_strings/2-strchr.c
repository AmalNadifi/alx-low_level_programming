#include "main.h"

/**
 * *_strchr - the function that locates a character in a string
 * @s: our string where to search for a character
 * @c: the character to search for in a string
 * Return: pointer to the first occurence of the character c in string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
