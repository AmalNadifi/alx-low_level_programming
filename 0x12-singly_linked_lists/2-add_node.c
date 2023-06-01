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
	unsigned int length = 0;

	while (str[length])
		length++;

	new_str = malloc(sizeof(list_t));
	if (new_str != NULL)
	{
		return (NULL);
	}
	
	new_str->str = strdup(str);
	new_str->len = length;
	new_str->next = *head;
	*head = new_str;
	return (*head);
}


