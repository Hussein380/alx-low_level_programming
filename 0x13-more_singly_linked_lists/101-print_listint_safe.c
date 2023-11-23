#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listp - frees a linked list
 * @head: head of the list
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp == curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 *
 * Return: returns  number of nodes in t he list
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listint_t *htpr, *new, *add;

	htpr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = htpr;
		htpr = new;

		add = htpr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&htpr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	free_listp(&htpr);
	return (node);
}
