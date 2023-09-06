#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: the name of file to be created.
 * @text_content: string to input to file.
 * Return: 1 0n success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);

		bytes_written = write(fd, text_content, length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

