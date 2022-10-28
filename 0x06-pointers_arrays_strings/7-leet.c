/**
 * leet - Entry point
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, j;
	int search[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int change[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == search[j])
			{
				n[i] = change[j / 2];
				j = 9;
			}
		}
	}
	return (n);
}
