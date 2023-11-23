#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: number
 * @index: indext to be set 0
 * Return: 1 if it worked or -1 if an error occurrred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmas = ~(1ul << index);

	if (index >= sizeof(unsigned int) * 8)
		return  (-1);
	*n = *n & bitmas;
	return (1);
}
