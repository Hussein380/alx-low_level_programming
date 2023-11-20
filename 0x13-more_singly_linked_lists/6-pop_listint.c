#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node and retuurn its data
 * @head: pointer to a pointer of head of the list
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (*head == NULL)
		return (0);
	current = *head;
	data = current->n;
	*head = (*head)->next;
	free(current);

	return (data);
}

