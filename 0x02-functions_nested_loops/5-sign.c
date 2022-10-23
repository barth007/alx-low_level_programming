int _putchar(int);
/**
 * print_sign - function checks if n is > or < or == 0
 * @n:  integer input
 * Return: Always 1 if n > 0, 0 if n == 0, otherwise -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
