#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point that prints its name, followed by a new line.
 * @argc: argument count of the argv
 * @argv: argument vector in arrays
 * Exit: (EXIT_SUCCESS)
 * Return: Always return (0)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
