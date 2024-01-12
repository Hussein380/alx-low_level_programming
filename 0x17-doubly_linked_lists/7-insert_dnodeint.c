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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp != NULL && count < idx - 1)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return(NULL);
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
