#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum num of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0 \\ 1(err0r)
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		if (cents >= 10)
			cents = cents - 10;
		if (cents >= 5)
			cents = cents - 5;
		if (cents >= 2)
			cents = cents - 2;
		if (cents >= 1)
			cents = cents - 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
