int find_prime(int num, int i)
{
	if ((num % i == 0) && (num != i))
		return (0);
	if (num == i)
	{
		return (1);
	}
	return (find_prime(num, i + 1));

}

int is_prime_number(int n)
{
	int i;
	
	i = 1;
	if (n < 0 || n == 1)
		return (0);
	return (find_prime(n, i));
}

