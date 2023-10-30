#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: character
 * Return: pointer to arr || null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
