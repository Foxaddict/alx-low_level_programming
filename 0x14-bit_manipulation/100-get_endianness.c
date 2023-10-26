#include "main.h"

/**
 * get_endianness - program checks the endianness
 *
 * Return: Success
 */
int get_endianness(void)
{
	int k;
	char *j;

	k = 1;
	j = (char *)&k;
	return (*j);
}

