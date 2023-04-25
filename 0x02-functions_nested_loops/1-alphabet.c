#include "main.h"
/**
 * print_alphabet  - The program prints the alphabet
 * in lower case, followed by a new line
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
