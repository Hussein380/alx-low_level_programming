#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds node to a list
 * @head: pointer to a pointer of head
 * @str: string
 * Return: newpointer is returned
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
