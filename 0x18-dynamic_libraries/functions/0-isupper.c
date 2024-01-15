#include "main.h"
/**
 * _isupper - checks fir uppercse letter
 *@c: stores uppercase letter
 *Return: 0
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
