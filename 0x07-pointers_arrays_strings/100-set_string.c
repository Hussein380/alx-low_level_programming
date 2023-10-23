#include "main.h"
/**
 * set_string - sets value of a pointer to a char
 * @s: a pointer to a pointer to char
 * @to: a pointer to char
 * Return: zero
 */
void set_string(char **s, char *to)
{
	*s = to;
}
