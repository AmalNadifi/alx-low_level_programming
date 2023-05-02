#include "main.h"

/**
 * puts_half - the function prints half of a string
 * followed by a new line
 * if the number of characters is odd, the function should
 * print the last n characters of the string
 * @str: string entered
 * Return: the half of the string entered
 */

void puts_half(char *str)
{
	int x, y, i;

	i = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		i++;
	}
	y = i / 2;

	if ((i % 2) == 1)
		y = ((i + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

