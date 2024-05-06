#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in array of integers
 * @array: A pointer to the first elements of the array  to search
 * @size: The number of elelments in an array
 * @value: The value to search for
 *
 * Return: The first index where value
 * is located or -1 if not founf  or array is Null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/*check for NULL array*/
	if (array  == NULL)
		return (-1);

	for (i = 0;  i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/*return 1 if index of the value is found*/
		if (array[i] == value)
			return (1);
	}
	/*Return -1 if value is not found*/
	return (-1);
}

