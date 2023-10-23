#include "main.h"
#include <stddef.h>
/**
 * _strchr - loccates a character in astring
 * @s: string
 * @c: character
 * Return: returns address of char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
