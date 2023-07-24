#include "main.h"

/**
 * char *_strcpy - the function copies the string pointed to by src
 * including the termination null byte to the buffer pointed to by dest
 * @dest: string to copy to
 * @src: string to copy from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
