#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list in a linked list
 * @head: head of the list
 * Return: true
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
