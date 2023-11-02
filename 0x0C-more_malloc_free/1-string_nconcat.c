#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of char to be copied
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *memory;

	if (s1 == NULL)
		s1 = "";
	if (s2 ==  NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	memory = malloc(sizeof(char) * (s1len + n) + 1);
	if (memory == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			memory[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			memory[s1len + i] = s2[i];
		memory[s1len + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			memory[i] = s1[i];
		for (i = 0; i < n; i++)
			memory[s1len + i] = s2[i];
		memory[s1len + i] = '\0';
	}
	return (memory);
}
