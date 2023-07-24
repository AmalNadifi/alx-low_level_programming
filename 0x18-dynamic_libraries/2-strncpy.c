#include "main.h"

/**
 * char *_strncpy - the function copies at most n bytes from src string
 * to the buffer pointed to by dest
 * @dest: string to copy to
 * @src: string to copy from
 * @n: the number of bytes to copy from src string
 * Return: resulting string in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
	dest[a] = '\0';
	}
	return (dest);
}
