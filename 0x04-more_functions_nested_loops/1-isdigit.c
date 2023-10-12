#include "main.h"
/**
 * _isdigit - chacks for a digit
 *@c: input for the values to look
 *Return: returns 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
