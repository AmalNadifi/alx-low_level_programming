#include "main.h"

/**
 * print_binary - the function prints binary transformation
 * of the entered number
 * @n: the number entered by the user
 * Return: void (always)
 */

void print_binary(unsigned long int n)
{
	int bit_field; /* the number of bits*/
	int idx;
	char C;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	idx = 0;
	for (bit_field = sizeof(n) * 8 - 1; bit_field >= 0; bit_field--)
	{
		C = (n >> bit_field) & 1;
		if (idx == 1)
		{
			putchar(C + '0');
		}
		else if (C == 1)
		{
			putchar(C + '0');
			idx = 1;
		}
	}
}		
