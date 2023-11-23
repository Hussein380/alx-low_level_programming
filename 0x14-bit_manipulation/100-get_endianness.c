#include "main.h"
/**
 * get_endianness - checks the indianness of the system
 * Return:   0 if big endian , 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian = (char *) &num;

	return (*endian);
}
