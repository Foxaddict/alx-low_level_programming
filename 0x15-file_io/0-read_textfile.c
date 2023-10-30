#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Check text file to print STDOUT.
 * @filename: text file to be checked.
 * @letters: number of letters to be check.
 * Return: Success.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *abc;
	ssize_t cd;
	ssize_t x;
	ssize_t j;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
		return (0);
	abc = malloc(sizeof(char) * letters);
	j = read(cd, abc, letters);
	x = write(STDOUT_FILENO, abc, j);

	free(abc);
	close(cd);
	return (x);
}
