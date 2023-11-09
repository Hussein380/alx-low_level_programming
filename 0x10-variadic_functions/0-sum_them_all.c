#include <stdarg.h>
/**
 * sum_them_all - function that sums arguments
 * @n: arguments passed
 * Return: return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argns;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(argns, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argns, int);
	return (sum);

}
