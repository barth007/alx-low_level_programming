#include "main.h"
/**
 *create_file - a function that creates a file with a content in it
 *@filename: name of file to create
 *@text_content: content to be included into the file
 *Return: 1 if successfully created
**/
int create_file(const char *filename, char *text_content)
{
	int file_write, file_descriptor, i;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file_descriptor == -1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	file_write = write(file_descriptor, text_content, i);
	close(file_descriptor);
	if (file_write == -1)
		return (-1);
	return (1);
}
