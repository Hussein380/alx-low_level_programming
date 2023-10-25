#include "main.h"
/**
 * _sqrt_recursion - returns natuaral sqr
 * @n: number to find sqr
 * Return: returns sqr
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_finder(n, 1));
}
/**
 * sqrt_finder - helper function to find sqrt recursively
 * @n: number for which to find the loop
 * @g: current guess for the square root
 * guess: the current guess of square rooot.
 * Return: returns natural sqrt or -1
 */
int sqrt_finder(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (sqrt_finder(n, g + 1));
}
