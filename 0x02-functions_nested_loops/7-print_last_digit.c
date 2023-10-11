#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: valueof lst digit
 * Return: returns last digit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;

	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}

