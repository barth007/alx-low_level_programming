/**
 * char *_strncat - function concatenates two strings with given n bytes
 * @dest: add to
 * @src: gotten from
 * @n: number of bytes
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	/*finding length of dest*/
	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	/*concatenating src to dest*/
	for (j = 0; j < n; j++)
	{
		dest[len + j] = src[j];
		if (src[j] == '\0')
			j = n;

	}
	return (dest);
}
