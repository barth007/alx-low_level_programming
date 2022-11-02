/**
 * _strchr - function that locates a character in a string.
 * @s: constant string string to search from
 * @c: the character to search for
 * Return:pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, j, len;

	for (j = 0; s[j] != '\0'; j++)
		len++;
	for (i = 0; i <= (len + 1); i++)
	{
		/* dereference the s so the value can be access*/
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');

}
