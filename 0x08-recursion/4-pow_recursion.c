#include "main.h"
/**
 * _pow_recursion - returns power of a num
 * @x: num
 * @y: power
 * Return: always zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return  (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
