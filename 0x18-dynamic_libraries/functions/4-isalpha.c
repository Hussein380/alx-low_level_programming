#include "main.h"

/**
 *_isalpha - checks for alphabetic x-ter
 * @c: parameter to print alhabetic x-ter
 *
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

