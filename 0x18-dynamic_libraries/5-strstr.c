#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: string to search in;
 * @needle: The substring to search for
 * Return: pointer to beginning of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
