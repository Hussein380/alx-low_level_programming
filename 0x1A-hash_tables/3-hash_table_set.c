#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key string: Key can't be an empty string
 * @value: The value associated with the key. Value must be duplicated
 *
 * Return: 1 if it is succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t  *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/*Get the index using the key inex function*/
	index = key_index((unsigned char *)key, ht->size);
	/*check if the key already exists, update the value if it does*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);

		}
		temp = temp->next;
	}
	/*Allocate memory for the new_node*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/*Duplicate the key and value string*/
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/*Add the new_node at the beginning of the linked list*/
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
