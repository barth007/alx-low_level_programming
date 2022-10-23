char _putchar(char);
void print_alphabet_x10(void)
{
	int i;
	i = 0;
	while (i < 10)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
	return;

}
