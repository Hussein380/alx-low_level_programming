#include <stdio.h>
/**
 * main - execution starting point
 *
 * Return: returns a 0 when succesfull
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
