#include "3-calc.h"

/**
 * main - the program checks our code
 * @argv: the argument vector
 * @argc: the arguments counter
 * Return: 0 ( success)
 */

int main(int argc, char **argv)
{
	int (*op_main_fun)(int, int);
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_main_fun = get_op_func(argv[2]);
	if (!op_main_fun)
	{
		printf("Error\n");
		exit(99);
	}
	if (y == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_main_fun(x, y));
	return (0);
}




