#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates block malloc anfd free
 * @ptr: pointer to previous memory
 * @old_size: size for old space
 * @new_size: size for new size
 * Return: returns pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, copy;
	char *newptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	copy = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < copy; i++)
		newptr[i] = ((char *)ptr)[i];
	free(ptr);
	return (newptr);
}
