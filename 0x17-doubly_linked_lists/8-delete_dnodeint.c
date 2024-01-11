#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index -  function that deletes the node at index
 * @head: double pointer to head
 * @index: index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		current = current->next;
	}

	if (index != i || current == NULL)
		return (-1);
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		if (current->prev != NULL)
		{
			current->prev->next = current->next;
		}
		if (current->next != NULL)
		{
			current->next->prev = current->prev;
		}
	}
	free(current);
	return (1);
}
