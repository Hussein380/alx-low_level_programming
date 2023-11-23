#include "main.h"
/**
 *  get_bit - returns the vlue of a bit at agiven index
 *  @n: the number
 *  @index: index of the bit you want to get
 *  Return: returns value of bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
