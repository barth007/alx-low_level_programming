/**
 * find_prime - checks if a number is prime
 * @num: the number to be checked
 * @i: checks if i is a multiple of num
 * Return: 1 if prime otherwise 0
 */
int find_prime(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i < num / 2)
	{
		i++;
		return (find_prime(num, i));
	}
	return (1);
}
/**
 * is_prime_number - function calls the find_prime()
 * @n: number to be checked
 * Return: output of find_prime
 */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n < 0 || n == 1)
		return (0);
	return (find_prime(n, i));
}

