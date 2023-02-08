#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: file to read from
 *@letters: number of bytes
 *Return: return size of bytes
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t file_discriptor, m;
	void *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(size_t));
	file_discriptor = open(filename, O_RDONLY);
	if (file_discriptor <= 0)
		return (0);
	m = read(file_discriptor, buffer, letters);
	if (m <= 0)
	{
		close(file_discriptor);
		return (0);
	}
	close(file_discriptor);
	write(STDOUT_FILENO, buffer, m);
	free(buffer);
	return (m);
}
