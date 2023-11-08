#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - print the result of simple operation
 * @argc: argument supplied number
 * @argv: array of pointers to the argument
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;
	(void) argc;

	if  (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
