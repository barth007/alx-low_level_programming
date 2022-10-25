/**
 * rev_string - function that reverses a string.
 * @s: a pointer variable
 * void: returns no data type
 */
void rev_string(char *s)
{
	int i, n, length;
	char rev;

	rev = s[0];
	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (n = 0; n < length; n++)
	{
		length--;
		rev = s[n];
		s[n] = s[length];
		s[length] = rev;

	}
}
