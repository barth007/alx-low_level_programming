/**
 * factorial - function that returns the factorial of a given number.
 * @n: the integer to be factorial
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
