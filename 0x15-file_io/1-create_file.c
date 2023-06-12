#include "main.h"

/**
 * create_file - the function creates a file
 * @filename: the pointer to the file to be created
 * @text_content: the content to write in the filename
 * Return: 1 (success) or -1 (failure : if file not created || not written..)
 */

int create_file(const char *filename, char *text_content)
{
	int idx, o_var, w_var; /* o_var for open & w_var for write*/

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	for (idx = 0; text_content[idx] != '\0'; idx++)

	o_var = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w_var = write(o_var, text_content, idx);
	if (o_var == -1 || w_var == -1)
	{
		return (-1);
	}
	close(o_var);
	return (1);
}
