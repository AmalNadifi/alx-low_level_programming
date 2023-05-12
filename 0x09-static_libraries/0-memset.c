#include "main.h"

/**
 * *_memset - the function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: our pointer
 * @b: the constant byte
 * @n: the number of bytes to fill
 * Return: the resultant s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
