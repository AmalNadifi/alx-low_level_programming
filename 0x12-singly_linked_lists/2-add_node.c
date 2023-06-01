#include "lists.h"

/**
 * add_node - the function adds new node at the beginning of list_t
 * @str: the new string to add in node
 * @head: the double pointer to the list list_t
 * Return: address of the new added element (success) or NULL (failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_str;
	unsigned int length;

	for (length = 0; str[length]; length++)

	new_str = malloc(sizeof(list_t));
	if (new_str != NULL || head != NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		new_str->str = strdup(str);
		if (new_str->str == NULL)
		{
			free(new_str);
			return (NULL);
		}
		new_str->len = length;
	}
	new_str->next = *head;
	*head = new_str;
	return (new_str);
}


