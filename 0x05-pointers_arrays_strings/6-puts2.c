#include "main.h"

/**
 * puts2 - the fucntion prints every other character of a string
 * followed by a new line
 * @str: the string that will be printed
 * Return: no return value
 */

void puts2(char *str)
{
	int  a;
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
