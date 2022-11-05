#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that prints the number of arguments passed into it.
 * @argc: length of the array
 * @argv: pointer to array
 * exit: Always (SUCCESS)
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
