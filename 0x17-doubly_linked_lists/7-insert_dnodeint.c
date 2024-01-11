#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function that inserts a  at a given position.
 * @h: double pointer to the head
 * @n: number to insert
 * @idx: indxto insert
 * Return: new_node ,or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	current = *h;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (idx != 0 && current == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
		{
			(*h)->prev = new_node;

			*h = new_node;
		}
	}
	else
	{
		new_node->next = current->next;
		new_node->prev = current;

		if (current->next != NULL)
			current->next->prev = new_node;

		current->next = new_node;
	}
	return (new_node);
}
