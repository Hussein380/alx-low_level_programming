#include "main.h"
/**
 * *_strcat - concatenates two stringd
 * @dest: stores first string
 * @src:: second string
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen = 0;
	int srclen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		srclen++;
	for (i = 0; i <= srclen; i++)
		dest[destlen + 1] = src[i];
	return (dest);
}
