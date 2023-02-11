#include "main.h"
/**
 *cp_file - copy from one file to another
 *@file_from: file to be copied
 *@file_to: destination file to copy to
 *Return: return copied file
**/
size_t cp_file(char *file_from, char *file_to)
{
	int fd_read, fd_write;
	char *buffer[BUFSIZE];
	size_t byte_read, write_byte;

	fd_read = open(file_from, O_RDONLY);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", file_from);
		exit(98);
	}
	fd_write = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((byte_read = read(fd_read, buffer, BUFSIZE)) > 0)
	{
		write_byte = write(fd_write, buffer, byte_read);
		if (write_byte == (size_t)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd_write) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %ld\n", write_byte);
		exit(100);
	}
	if (close(fd_read) == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %ld\n", byte_read);
		exit(100);
	}
	return (fd_write);
}
/**
 *main - Entry point
 *@argc: argument count
 *@argv: an array
 *Return: 0
**/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}
