#include "main.h"
#include <stdio.h>

/**
 * print_buffer - main function
 *
 * @b: The buffer.
 *
 * @size: size of buffer
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int x;
	int y;
	int c;

	x = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (x < size)
	{
	y = size - x < 10 ? size - x : 10;
	printf("%08x: ", x);
	for (c = 0; c < 10; c++)
	{
	if (c < y)
	printf("%02x", *(b + x + c));
	else
	printf("  ");
	if (c % 2)
	{
	printf(" ");
	}
	}
	for (c = 0; c < y; c++)
	{
	int c = *(b + x + c);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	x += 10;
	}
}

