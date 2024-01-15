#include "main.h"
/**
 * _strpbrk - searches a tring
 * @s: string to search in
 * @accept: byte to search for
 * Return: 0 || null
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
