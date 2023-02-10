#include "main.h"
/**
 *main - copies one file to another file
 *@argc: argument count
 *@argv: an array
 *Return: 0
**/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	void *buffer[BUFSIZE];
	size_t  byte_read, write_byte;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | O_RDONLY, 0664);
	while ((byte_read = read(file_from, buffer, BUFSIZE)) > 0)
	{
		write_byte = write(file_to, buffer, byte_read);
		if (write_byte == (size_t)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %ld\n", write_byte);
		exit(100);
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %ld\n", byte_read);
		exit(100);
	}
	return (0); }
