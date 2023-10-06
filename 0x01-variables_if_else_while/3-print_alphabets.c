#include <stdio.h>
/**
 * main - the entry point
 *
 * Return: retursn zero when succesfull
 *
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
	putchar(i);
	}
	putchar('\n');
return (0);
}
