#include "lists.h"
#include <stddef.h>
#include  <stdlib.h>
#include <stdio.h>
/**
 *  print_list - prints all elements of a list
 *  @h: head of the list
 *  Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	/* sets new to point the head*/
	const list_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		if (new->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", new->len, new->str);
		
		new = new->next;
		count++;
	}
	return (count);
}
