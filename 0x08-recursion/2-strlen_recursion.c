/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: variable name pointing to the string
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	return (0);
}
