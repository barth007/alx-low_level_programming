#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 *main - Entry point
 *
 *Return: Always 1 (failure)
 */

int main(void)
{
	const char x[] =
	"and that piece of art is useful\" - Dora Korpar, 2015 10-19\n";
	write(STDERR_FILENO, x, strlen(x));
	return (1);
}
