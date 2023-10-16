#include "main.h"
/**
 * rev_string - function that reversess a string
 * @s: string
 * Return: returns string in rev
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char j;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		j = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = j;
	}
}
