#include "main.h"

/**
 * _strncat - the function is similar to _strcat except that
 * it will use at most n bytes from src and
 * src does not need to be null terminated if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from src string
 * Return: resulting string in dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}
