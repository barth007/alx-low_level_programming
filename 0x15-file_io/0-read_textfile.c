#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: file to read from
 *@letters: number of bytes
 *Return: return size of bytes
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t file_descriptor, m;
	void *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == (size_t)(-1))
		return (0);
	m = read(file_descriptor, buffer, letters);
	if (m == (size_t)(-1))
	{
		close(file_descriptor);
		return (0);
	}
	close(file_descriptor);
	write(STDOUT_FILENO, buffer, m);
	free(buffer);
	return (m);
}
