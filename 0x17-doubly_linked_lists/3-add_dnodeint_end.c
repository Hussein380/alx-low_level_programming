#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end -  function that adds a new node at the end
 * @head: pointer to a pointer to the head
 * @n: number to insert
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		temp->prev = current;
		current->next = temp;
	}


	return (temp);
}
