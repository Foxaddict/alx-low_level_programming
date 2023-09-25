#include "main.h"
/**
 * _strpbrk - Starting point
 * @s:add input
 * @accept:add input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int l;

		while (*s)
		{
			for (l = 0; accept[l]; l++)
			{
			if (*s == accept[l])
			return (s);
			}
		s++;
		}

	return ('\0');
}

