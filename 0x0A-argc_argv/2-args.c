#include <stdio.h>
/**
 * main - prints arguments it receives
 * @argc: argument count
 * @argv: arguments vector
 * Return: return 0;
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
