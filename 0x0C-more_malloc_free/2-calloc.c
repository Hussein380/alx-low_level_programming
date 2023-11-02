#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: number of array members
 * @size: size array
 * Return: returns pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = calloc(nmemb, size);
	if (memory == NULL)
		return (NULL);
	else
		return (memory);
}
