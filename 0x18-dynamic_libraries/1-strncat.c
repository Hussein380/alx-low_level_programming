#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenats two strings
 * @dest: stores first string
 * @src: second string
 * @n: number of character to be printed
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}

