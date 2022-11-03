/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y.
 * @x: base integer
 * @y: power
 * Return: power of x**y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
