#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to POSIX standard output.
 * @filename: name of the file.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_open, file_read, number_of_bytes_letters;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		free(buffer);
		return (0);
	}
	file_read = read(file_open, buffer, letters);
	if (file_read == -1 || file_read == 0)
	{
		free(buffer);
		close(file_open);
		return (0);
	}
	number_of_bytes_letters = write(STDOUT_FILENO, buffer, file_read);
	if (number_of_bytes_letters == -1 || number_of_bytes_letters != file_read)
	{
		free(buffer);
		close(file_open);
		return (0);
	}
	free(buffer);
	close(file_open);

	return (number_of_bytes_letters);
}

