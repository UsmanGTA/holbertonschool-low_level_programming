#include "holberton.h"

/**
 * create_file - creates a new file
 * with content indicated by stdin
 * @filename: - filename
 * @text_content: contains text content
 * Return: 1 | -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int lettercount, writecount;

	/* Input/Null Check */
	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	/* Create and open the file with 600 perms */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	/* Get the strlen to give pass onto the write func */
	for (lettercount = 0; text_content[lettercount] != '\0'; lettercount++)
	{
		;
	}

	writecount = write(fd, text_content, lettercount);

	if (writecount == -1)
	{
		return (-1);
	}

	close(fd);

return (1);
}
