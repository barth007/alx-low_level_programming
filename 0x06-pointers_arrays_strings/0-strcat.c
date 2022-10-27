/**
 * char *_strcat - function that concatenates two strings.
 * @dest: added to
 * @src: gotten from
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i, len, j;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (j = 0; src[j] != '\0'; j++)
		dest[len + j] = src[j];
	dest[len + j] = '\0';
	return (dest);
}
