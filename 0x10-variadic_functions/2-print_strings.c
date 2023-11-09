#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *  print_strings - prints strings passed as arguments
 *  @separator: string seperator
 *  @n: number of argumentts
 *  Return: return 0;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(arg, char*);

		if (str != NULL)
		{

			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
