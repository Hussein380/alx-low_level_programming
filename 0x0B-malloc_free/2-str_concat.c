#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * Return: returns null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, i;
	int s2_len = 0;
	char *concatenate;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s2_len++;
	}
	concatenate = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (concatenate == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concatenate[i] = s1[i];
	}
	for (i = 0;  s2[i] != '\0'; i++)
	{
		concatenate[s1_len + i] = s2[i];
	}
	return (concatenate);
}
