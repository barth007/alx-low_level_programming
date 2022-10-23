#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*variable declaration and initialization*/
	char *put = "_putchar";

	while (*put)
	{
		_putchar(*put);
		put++;
	}
	_putchar('\n');
	return (0);
}

