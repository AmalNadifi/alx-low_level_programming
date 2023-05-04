#include  "main.h"

/**
 * *string_toupper - the function changes all lowercase letters of a string
 * to uppercase
 * @a: the pointer in our program
 * Return: the pointer a
 */

char *string_toupper(char *a)
{

	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
	}
	return (a);
}
