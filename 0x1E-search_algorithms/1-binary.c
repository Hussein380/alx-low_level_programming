#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted
 *  array of integers using the Binary search algorithm
 *  @array: array of the values
 *  @size: size of the array
 *  @value: value to be searched for
 *  Return: index where value is located
 */

 /**Binary function**/
int binary_search(int *array, size_t size, int value)
{
	/*Initialize left and right pointers*/
	size_t left = 0, right = size - 1, mid, i;

	/*Check for Null Array*/
	if (array == NULL)
		return (-1);

	/*Iterative binary search*/
	while (left <= right)
	{
		/*Print the current subarrya being searched*/
		printf("searching in array: ");
		for (i = left; i <= right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		/*calculate the middle index*/
		mid = (left + right) / 2;

		/*if middle is equal to the value return the index*/
		if (array[mid] == value)
			return (mid);

		/*If the middle value is less that value, update the left pointer */
		if (array[mid] < value)
			left = mid + 1;

		/*if middle element is greater than value , update the right pointer */
		else
			right = mid - 1;
	}
	/*return -1, if value not found */
	return (-1);
}

