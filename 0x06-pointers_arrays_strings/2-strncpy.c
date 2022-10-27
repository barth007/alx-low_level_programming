/**
 * char *_strncpy - function copies a string
 * @dest: copy to
 * @src: copied from
 * @n: number of bytes from src
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		if (n > src[i])
			dest[i] = '\0';
	}
	return (dest);
}
