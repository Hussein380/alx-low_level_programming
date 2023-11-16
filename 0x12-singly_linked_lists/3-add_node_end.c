#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - add node to the end of list
 * @head: Apointer to the pointer to the head of the list
 * @str: the string to be fuplicated and stored in the new node
 * Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *duplicate_str;

	/*allocates memory for the new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*Duplicate the string using strdup*/
	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{

		free(new_node);
		return (NULL);
	}
	/*fill in the new node*/
	new_node->str = duplicate_str;
	new_node->len = strlen(duplicate_str);
	new_node->next = NULL;

	/*if the list is empty,make new_node th ehead*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*find the last node in the list*/
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;
	return (new_node);
}
