#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to a pointer to the head of the list
 * Return: returns head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp2;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
