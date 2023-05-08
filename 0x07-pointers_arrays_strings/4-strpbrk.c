#include "main.h"

/**
 * *_strpbrk - the function that searches a string for any set of bytes
 * @s: our string to be scanned
 * @accept: string with the bytes to match from s
 * Return: resultant pointer to the byte in s matching one of the bytes
 * in accept , or NULL if there is no such byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;
	char *ptr;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
			}
			y++;
		}
		x++;
	}
	return (0);
}
