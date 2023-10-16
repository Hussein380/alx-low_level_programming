#include "main.h"
/**
 * swap_int - swap int of two
 * @a: stores a
 * @b:stores b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

