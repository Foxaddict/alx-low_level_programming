#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file that will be created.
 * @text_content: A pointer to a string that writes to the file.
 * Return: Success
 */
int create_file(const char *filename, char *text_content)
{
	int jk, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	jk = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(jk, text_content, len);

	if (jk == -1 || w == -1)
		return (-1);

	close(jk);

	return (1);
}

