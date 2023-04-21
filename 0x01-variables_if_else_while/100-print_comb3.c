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

for (x = 48 ; x < 57 ; x++)
{
	for (y = 49 ; y < 58 ; y++)
	{
		if (y > x)
		{
			putchar(x);
			putchar(y);
			if (x != 56 || y != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
