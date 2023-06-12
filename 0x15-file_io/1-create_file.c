#include "main.h"

/**
 * create_file - the function creates a file
 * @filename: the pointer to the file to be created
 * @text_content: the content to write in the filename
 * Return: 1 (success) or -1 (failure : if file not created || not written..)
 */

int create_file(const char *filename, char *text_content)
{
	int idx, var;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (idx = 0; text_content[idx] != '\0'; idx++)

	var = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (var == -1)
	{
		return (-1);
	}
	write(var, text_content, idx);
	return (1);
}
