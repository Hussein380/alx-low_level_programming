#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index -  function that returns the nth node
 * @head: pointer to the head of the list
 * @index: index to return
 * Return: node or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}
	return ((i == index) ? current : NULL);
}
