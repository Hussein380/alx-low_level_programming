#include "main.h"
/**
 * _print_rev_recursion - prints in revesre
 * @s: input
 * Return: always zero
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
