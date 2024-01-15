#include "main.h"
/**
 *_strlen - returns lentgh of a string
 * @s: stores string
 *Return: returns lenth
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
