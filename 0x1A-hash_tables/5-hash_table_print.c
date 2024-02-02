#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int printed = 0;

	/*Check if the hash table is NULL*/
	if (ht == NULL)
		return;

	/*Print the opening curly brace*/
	printf("{");

	/*Iterate through each array index*/
	for (i = 0; i < ht->size; i++)
	{
		/*Get the linked list at the current index*/
		node = ht->array[i];

		/*Traverse the linked list*/
		while (node != NULL)
		{
			/*check if a comma and space should be printed before key, value pair*/

			if (printed)
				printf(", ");
			/*print the key_value pair*/
			printf("'%s': '%s'", node->key, node->value);

			/*set the flag to indicate that akey-value pair has been printed */
			printed = 1;

			/*move to the next->node*/
			node = node->next;
		}
	}
	/*print the closing curly braces and a newline character*/
	printf("}\n");
}
