#include <stdio.h>
/**
 * main  - The program prints the sum of all the multiples
 * of 3 and 5 up to 1024, followed by a new line
 * Return: 0 (Sucess)
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y = y + x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
