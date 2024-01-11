#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - function that returns the sum of all the data (n) of list
 * @head: pointer to head
 * Return: 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
	{
		return (0);
	}
	current = head;


	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
