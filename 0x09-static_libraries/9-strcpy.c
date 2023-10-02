#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int n = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; n < l ; n++)
	{
		dest[n] = src[n];
	}
	dest[l] = '\0';
	return (dest);
}

