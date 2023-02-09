#include "main.h"
/**
 *create_file - a function that creates a file with a content in it
 *@filename: name of file to create
 *@text_content: content to be included into the file
 *Return: 1 if successfully created
**/
int create_file(const char *filename, char *text_content)
{
	int content, result;
	FILE *file_descriptor;

	if (filename == NULL)
		return (-1);
	result = access(filename, R_OK | W_OK);
	if (result == 0)
	{
		file_descriptor = fopen(filename, "w");
	}
	else
	{
		file_descriptor = fopen(filename, "w");
		chmod(filename, 0600);
	}
	if (file_descriptor == NULL)
		return (-1);
	if (text_content == NULL)
	{
		content = fputs(" ", file_descriptor);
		fclose(file_descriptor);
		return (1);

	}
	content = fputs(text_content, file_descriptor);
	fclose(file_descriptor);
	if (content != 0)
		return (-1);
	return (1);
}
