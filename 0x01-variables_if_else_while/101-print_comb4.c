#include <stdio.h>
/**
 * main - The program prints all single numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
int x;
int y;
int z;

for (x = 48 ; x < 57 ; x++)
{
	for (y = 49 ; y < 58 ; y++)
	{
		for (z = 50 ; z < 58 ; z++)
		{
		if (z > y && y > x)
		{
			putchar(x);
			putchar(y);
			putchar(z);
			if (x != 55 || y != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
}
putchar('\n');
return (0);
}
