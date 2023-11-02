#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of in
 * @min: minimum num
 * @max:maximum num
 * Return: returnspointer
 */
int *array_range(int min, int max)
{
	int i;
	int size;
	int *memory;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	memory = malloc(sizeof(int) * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		memory[i] = min++;
	return (memory);
}
