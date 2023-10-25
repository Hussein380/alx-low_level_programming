#include "main.h"
/**
 * is_prime_number - check if an int is prime
 * @n: the num to be checked
 * Return: if num is prime 1,otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - to check for prime recursively
 * @n: number to check
 * @d: the current divisor test
 * Return: 1 if num is prime , 0 otherwise
 */
int is_prime_helper(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_helper(n, d + 1));
}
