#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search -  Searches for a value in a sorted array
 * @array: Pointer to the first elements in the array
 * @value: the value to search fo
 * @size: size of the arrayr
 * Return: The index of the value if found, otherwise -1
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t left = 0, right = jump, i;

	if (array == NULL || size == 0)
		return (-1);
	/*loop while right is less than size  of the array*/
	while (right < size)
	{
		/*print the value checked during each iteration*/
		printf("Value checked array[%lu] = [%d]\n", right,
				array[right]);
		/*if the value ar right index is greater than */
		if (array[right] >= value)
		{
			/*perform linear search  within the block */
			for (i = left; i < right; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i,
						array[i]);
				/*return its index if the crnt matches trgt*/
				if (array[i] == value)
					return (i);
			}
			/*if target  value not found within block*/
			return (-1);
		}
		/*up[date left and right for the next jump*/
		left = right;
		right += jump;
	}
	/*perform linear search  for the last block*/
	for (i = left; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		/*if the current element matches the target , return its idx*/
		if (array[i] == value)
			return (i);
	}
	/*if the targt value is not found  in entire array, return -1*/
	return (-1);
}
