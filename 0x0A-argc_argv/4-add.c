#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program adds positive numbers and prints the result
 * followed by a new line
 * if no number is passed , print 0 followed by new line
 * if one number is not digit n print Error,
 * followed by a new line and return 1
 * @argc: the argument counter as integer
 * @argv: the argument vestor, list
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int res = 0;
	char *sub;

	if (argc == 0)
	{
		printf("0\n");
	}
	while (--argc)
	{
		for (sub = argv[argc]; *sub; sub++)
		{
			if (*sub < '0' || *sub > '9')
			{
				return (printf("Error\n"), 1);
			}
			res = res + atoi(argv[argc]);
		}
	}
	printf("%d\n", res);
	return (0);
}


