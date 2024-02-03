#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * hash_table_create - Create a hash table
 * @size: size of the hash table array
 *
 * Return: pointer to the newly created hash table, or NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/*Allocate memory for the hash table structure*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/*Allocate memory for hte array of hash nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;

	/*Initialize each elelement of the array to NULL*/
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
