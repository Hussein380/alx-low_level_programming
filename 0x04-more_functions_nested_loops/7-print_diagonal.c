#include "main.h"
/**
 * print_diagonal - prins duiogonal line
 * @n: takes the number of diogonal line
 * Return: returns diogonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}
