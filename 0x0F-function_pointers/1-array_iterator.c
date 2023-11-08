#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -iterates over an array and prints
 * @array: array of int
 * @action: action to be taken (in or hexadecimal)
 * @size: size of an array
 * Return:nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

