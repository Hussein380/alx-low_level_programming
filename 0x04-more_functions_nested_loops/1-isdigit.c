#include "main.h"
/**
 * _isdigit - chacks for a digit
 *@c: input for the values to look
 *Return: returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
