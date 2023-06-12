#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program makes a copy of the content of file1 to another file2
 * @argc: the arguments counter
 * @argv: the arguments vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int src, dest, r_var;
	char a[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	while ((r_var = read(src, a, 1024)) > 0)
	{
		if (write(dest, a, r_var) != r_var)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]), exit(99);
		}
	}
	if (r_var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]), exit(98);
	}
	src = close(src);
	dest = close(dest);
	if (src)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	if (dest)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
