#include "main.h"
/**
 * reverse_array - reverses content of an arrayof intagers
 * @a: an array of intagers
 * @n: size of the array
 * Return: returns  0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
