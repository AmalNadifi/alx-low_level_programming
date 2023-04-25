#include "main.h"
/**
 * print_alphabet_x10  - The program prints 10 times the alphabet
 * in lower case, followed by a new line
 */

void print_alphabet_x10(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	}
}
