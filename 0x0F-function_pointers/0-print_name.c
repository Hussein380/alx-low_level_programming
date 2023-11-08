#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 * @name: string that take name
 * @f: function that contains other function to print name
 * Return: returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
