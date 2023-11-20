#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list and sets head to null
 * @head: pointer to a pointer of head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (*head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
