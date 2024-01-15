 #include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: copied to
 * @src: copied from
 * @n: number of memry area to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
