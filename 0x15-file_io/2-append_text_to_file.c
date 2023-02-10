#include "main.h"
/**
 *append_text_to_file - function that appends to a file
 *@filename: the file to append to
 *@text_content: the content to append to the file
 *Return: 1
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, i;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	i = 0;
	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}
	while (text_content[i])
		i++;
	write(file_descriptor, text_content, i);
	close(file_descriptor);
	return (1);
}
