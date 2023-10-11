#include "main.h"
/**
 *print_alphabet_x10 - prints alphabest 10times
 *
 * Return: zero returns
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
