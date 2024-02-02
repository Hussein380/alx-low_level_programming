#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	/* iterate though each array index */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];

		/*Traverse the linked list at he current index */

		while (current != NULL)
		{
			/*free the key value of each node*/
			free(current->key);
			free(current->value);

			/*Save the next node before freeing the current node*/
			temp = current->next;
			free(current);
			/*Move to the next node in the linked list*/
			current = temp;
		}
	}
	/*Free the array an dthe hash table structure*/
	free(ht->array);
	free(ht);
}
