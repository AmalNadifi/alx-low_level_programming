#include "main.h"

/**
 * append_text_to_file - the function appends text at the end of chosen file
 * @filname: the pointer to the chosen file
 * @text_context: the pointer to the content to append
 * Return: 1 (success) or -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int counter, o_var, w_var;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		do {
			counter++;
		} while (text_content[counter] != '\0');
	}
	o_var = open(filename, O_WRONLY | O_APPEND);
	w_var = write(o_var, text_content, counter);
	if (o_var == -1 || w_var == -1)
	{
		return (-1);
	}
	close (o_var);
	return (1);
}
