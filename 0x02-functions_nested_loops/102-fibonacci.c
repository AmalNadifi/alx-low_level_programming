#include <stdio.h>
/**
 * main  - The program prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int x;
	long y = 1, z = 2;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%ld", y);
		}
		else if (x == 1)
		{
			printf(", %ld", z);
		}
		else
		{
			z = z + y;
			y = z - y;
			printf(", %ld", z);
		}
	}
	printf("\n");
	return (0);

}

