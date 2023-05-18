#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - the function reallocates a memory block,
 * using malloc and free
 * @ptr: the pointer to previous memory allocated with a call to malloc
 * @old_size: how many bytes to allocate for ptr
 * @new_size: how many bytes to allocate for the new block memoruy
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *res;
	unsigned int x;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		res = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (res);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		res = malloc(new_size);
		if (res == NULL)
		{
			return (NULL);
		}
		for (x = 0; x < old_size && x < new_size; x++)
		{
			*((char *)res + x) = *((char *)ptr + x);
			free(ptr);
		}
	}
	return (res);
}
