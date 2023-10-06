#include <stdio.h>
/**
 * main - entry point ffor execution
 * Return: returns zero when successful;
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0)
		;
}
