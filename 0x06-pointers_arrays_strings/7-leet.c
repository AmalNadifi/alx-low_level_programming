#include "main.h"
/**
 * leet - the function encodes a string into 1337
 * @a: the string entered by the user
 * Return: a value
 */

char *leet(char *a)
{
	int x, y;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (x = 0; a[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (a[x] == str1[y])
			{
				a[x] = str2[y];
			}
		}
	}
	return (a);
}
