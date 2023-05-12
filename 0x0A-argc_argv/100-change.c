#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: the argument counter as an integer
 * @argv: the argument vector, list
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0, change = atoi(argv[1]);
		int mincents = 0;
		int cents[] = {25, 10, 5, 2, 1};

		do {
			if (change >= cents[x])
			{
				mincents = mincents + (change / cents[x]);
				change = change % cents[x];
				if (change % cents[x] == 0)
				{
					break;
				}
			}
			x++;
		} while (x < 5);
	       printf("%d\n", mincents);
	}
	else
	printf("Error\n");
	return (1);
return (0);
}
