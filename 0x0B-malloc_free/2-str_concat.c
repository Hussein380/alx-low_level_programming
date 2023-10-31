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
	int s2_len = 0, j;
	char *concatenate;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 != NULL)
	{
		while (s1[s1_len] != '\0')
		{
			s1_len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2_len] != '\0')
		{
			s2_len++;
		}
	}
	concatenate = malloc(sizeof(char) * s1_len + s2_len + 1);

	for (i = 0; i < s1_len; i++)
	{
		concatenate[i] = s1[i];
	}
	for (j = 0; j < s2_len; j++)
	{
		concatenate[i + j] = s2[j];
	}
	concatenate[i + j] = '\0';
	return (concatenate);
}
