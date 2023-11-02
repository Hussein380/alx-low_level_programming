#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
