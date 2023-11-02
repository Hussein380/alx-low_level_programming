#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive intagers
 * @argc: argument count
 * @argv: argument vector
 * Return: returns zer
 */
int main(int argc, char *argv[])
{
	int i, j, num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (98);
			}
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
