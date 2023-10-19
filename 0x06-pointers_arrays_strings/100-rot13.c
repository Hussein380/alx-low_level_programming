#include "main.h"
/**
 * rot13 - encodes rot13
 * @s: string
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == src[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
