#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: head of the element
 * Return: returns nu,ber of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
