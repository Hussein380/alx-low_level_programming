#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * @str: string that is copied
 * Return: returns null if strr == null
 */
char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc(length + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[i] = '\0';
	return (duplicate);
}
