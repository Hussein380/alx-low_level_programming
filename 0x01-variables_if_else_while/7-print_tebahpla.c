#include <stdio.h>
/**
 * main - entry point of programme
 *
 * Return: returns 0 when sucessfull
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
