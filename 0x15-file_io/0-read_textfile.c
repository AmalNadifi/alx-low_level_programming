#include "main.h"

/**
 * read_textfile - the functionreads a text file & prints it
 * to the POSIX standard output
 * @filename: the pointer to the chosen file
 * @letters: how many letters to read & print
 * Return: value of letters or 0 (failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int test = open(filename, O_RDONLY);
	char *mem;
	ssize_t res;

	if (filename == NULL || letters == NULL || test == -1)
	{
		return (0);
	}
	res = read(test, mem, letters);
	res = write(STDOUT_FILENO, mem, res);
	close(test);
	return (res);
}
