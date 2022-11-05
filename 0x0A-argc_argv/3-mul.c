#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point: multiplies two numbers.
 * @argc: length of the array argv
 * @argv: array of string
 * exit: (SUCCESS)
 * Return: Always multiplication of two integer
 */
int main(int argc, char *argv[])
{
	int i, result, x;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = 1;
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			result = result * x;
		}
		printf("%d\n", result);
		return (0);
	}
	exit(EXIT_SUCCESS);
}
