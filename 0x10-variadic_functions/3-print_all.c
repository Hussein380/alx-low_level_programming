#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of typr of arguments passed to the fucntion
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
