#include "main.h"

/**
 * main - the program makes a copy of the content of file1 to another file2
 * @argc: the arguments counter
 * @argv: the arguments vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int src, dest, r_var, w_var = 0, test = 1024;
	char a[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Eroor: Can't write to %s\n", argv[2]);
		close(src), exit(99);
	}
	while (test == 1024)
	{
		r_var = read(src, a, 1024);
		if (r_var == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w_var = write(dest, a, r_var);
		if (w_var < r_var)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(src) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
