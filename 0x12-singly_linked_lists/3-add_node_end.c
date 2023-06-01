#include "lists.h"

/**
 * add_node_end - the function adds a new node at the end of list_t
 * @head: THE double pointer to the list list_t
 * @str: the new string to add to the end of list_t
 * Return: address of the new added element (success) or NULL (failure)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_str;
	list_t *tmp = *head;
	unsigned int length = 0;

	*new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}
	if (str)
	{
		new_str->str = strdup(str);
		new_str->len = length;
	}
	if (tmp != NULL)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_str;
	}
	else
	{
		*head = new_str;
	}
	return (new_str);
}


