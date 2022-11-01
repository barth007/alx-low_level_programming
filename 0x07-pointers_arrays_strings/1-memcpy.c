/**
 * _memcpy -function copies n bytes from memory area src to memory area dest
 * @src: copied from
 * @dest: copy to
 * @n: number of byte
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		src[i] = dest[i];
		while (i < n)
		{
			src[i] = '\0';
			i++;
		}
	}
	return (dest);
}
