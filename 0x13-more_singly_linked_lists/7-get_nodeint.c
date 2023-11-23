#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth node of a list
 * @head: pointer head of the list
 * deint.c::
 *
 * @index: index of value  needed to return
 * Return: pointer to the nth node or null if it dont exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
