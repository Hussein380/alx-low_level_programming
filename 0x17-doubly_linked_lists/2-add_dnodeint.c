#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function that adds new nide at the beginning of the list
 * @head: a pointer to a pointer to the head
 * @n: intager to add
 * Return: adress of new element or Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*create a new node*/
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	/*add the node at the beginning*/
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (*head);
}
