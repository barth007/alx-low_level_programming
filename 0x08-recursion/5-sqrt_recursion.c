/**
 * _find_sqrt - function finds the square root of a number
 * @num: find the square of num
 * @i: checking the root with i * i
 * Return: i
 */
int _find_sqrt(int num, int i)
{
	if (i * i == num)
	{
		return (i);
	}
	if (i * i > num)
	{
		return (-1);
	}
	return (_find_sqrt(num, i + 1));
}
/**
 * _sqrt_recursion - function that calls the _find_sqrt()
 * @n: n is the number to find root
 * Return: the value from _find_sqrt()
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_find_sqrt(n, i));

}
