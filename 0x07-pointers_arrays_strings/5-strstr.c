#include "main.h"

/**
 * *_strstr - the function locates a substring
 * @haystack: string to be scanned
 * @needle: the substring to match from haystack
 * Return: resultant pointer to the beginning of the located substring
 * or NULL if the substring cannot be found
 */

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;
		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
			return (haystack);
	}
	return (NULL);
}
