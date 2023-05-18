#include "main.h"
#include <stdio.h>

/**
 * _calloc - the function allocates memory for an array, using malloc
 * @nmemb: number of elements from the array entered
 * @size: number of bytes of each element of the array entered
 * Return: resultant pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	char p, *str, j;
	int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(int) * nmemb);
	if (res == 0)
	{
		return (NULL);
	}

	else
	{
		*p = str;
		while (i--)
		{
			*str++ = j;
		}
		return (p);
	}
	return (res);
}

