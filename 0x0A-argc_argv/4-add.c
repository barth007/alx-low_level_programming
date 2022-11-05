#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point that adds positvie numbers
 * @argc: length of array
 * @argv: pointer to array
 * Return: always success(0);
 */

int main(int argc, char *argv[])
{
	int result, i, x;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		result = 0;
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
			{
				x = strtol(argv[i], NULL, 10);
				result = result + x;
			}
			else
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		printf("%d\n", result);
	}
	exit(EXIT_SUCCESS);
}
