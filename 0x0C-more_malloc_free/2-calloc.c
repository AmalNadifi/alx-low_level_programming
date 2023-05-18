#include "main.h"
#include <stdlib.h>

/**
 * _memset - the function fills the memory with a constant byte
 * @str: memory to fill
 * @c: character to copy
 * @num: number of times to copy c
 * Return: resultant pointer to str
 */

char *_memset(char *str, char c, unsigned int num)
{
	char *p = str;

	while (num--)
	{
		*str++ = c;
	}
	return (p);
}

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - the function allocates memory for an array, using malloc
 * @nmemb: number of elements from the array entered
 * @size: number of bytes of each element of the array entered
 * Return: resultant pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(int) * nmemb);
	if (res == 0)
	{
		return (NULL);
	}
	_memset(res, 0, sizeof(int) * nmemb);

	return (res);
}
