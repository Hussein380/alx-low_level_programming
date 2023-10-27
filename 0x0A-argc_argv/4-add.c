#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main - adds positive num * main - prints prime num
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;
	bool hasError = false;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			hasError = true;
			break;
		}
		sum += num;
	}
	if (hasError)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
