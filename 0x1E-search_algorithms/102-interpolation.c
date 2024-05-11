#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: the value to search for
 *
 * Return: If the value is not present or array is Null -1.
 * Else, the first index where the value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, probe_position;

	if (array == NULL)
		return (-1);
	while (high >= low && value >= array[low] && value <= array[high])
	{
		/*calculate the probe position using interpolation*/
		probe_position =
			low + (((double)(high - low) /
						(array[high] - array[low])) *
					(value - array[low]));
		/*print the value checked in the array*/
		printf("Value checked array[%lu] = [%d]\n",
				probe_position, array[probe_position]);

		if (array[probe_position] == value)
			return (probe_position);
		else if (array[probe_position] < value)
			low = probe_position + 1;
		else
			high = probe_position - 1;
	}
	/*value not found*/
	printf("Value checked array[%lu] is out of range\n", probe_position);
	return (-1);

}
