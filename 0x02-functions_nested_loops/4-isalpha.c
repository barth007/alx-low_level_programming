/**
 * _isalpha - is a function that checks for alphabet
 * @c: single letter input
 * Return: Always 1 if c is alphabet otherwise -0o
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
