#include "main.h"

/**
 * _strcat - the function appends the src string to the dest string
 * overwriting the null byte at the end of dest and then adds
 * a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: resulting string in dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);

}
