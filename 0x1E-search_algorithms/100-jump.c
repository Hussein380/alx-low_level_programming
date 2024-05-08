#include <stdio.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_search -  function that searches for a value in a sorted array
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: the index of the vaklue if found or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size), i;
	size_t left = 0, right = jump;
	/*Check if the array is NULL or empty. If so, return -1.*/
	if (array == NULL || size == 0)
		return (-1);
	/* Calculate the jump step as the square root of the size of the array.*/
	jump = sqrt(size);
	/* Loop while right is less than the size of the array:*/
	while (right < size)
	{
		/*Print the value checked during each iteration*/
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		/*if array, right is  greater than or equal to target value*/
		if (array[right] >= value)
		{
			/*perform linear search within the block defined by*/
			for (i = left; i < right; i++)
			{
				/*prin the value checked during iteration*/
				printf("Value checked array[%lu] = [%d]\n",
						i, array[i]);
				/*if array is equal to target return i*/
				if (array[i] == value)
					return (i);
			}
			/*if the target value is not found within*/
			return (-1);
		}
		/*update prev to left and left to right*/
		left = right;
		right += jump;
	}
	/*perform linear search for the last block*/
	for (i = left; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
