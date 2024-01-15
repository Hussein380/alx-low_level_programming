#include "main.h"
/**
 * _memset - fill a block of memoery with specific value
 * @s: starting address of mempry to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
