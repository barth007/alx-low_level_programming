#include "main.h"
/**
 * _strncpy - copy one string into another strong
 * @dest: the destination string
 * @src: the source of the string
 * Return: A pointer to the dest
**/
char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * string_nconcat - this function concatenates two strings
 * @s1: first string to concatenate with
 * @s2: second string to use to concatenate
 * @n: number of bytes
 * Return: a pointer to s1
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStrn;
	unsigned int len1, len2, i, j, newLen;

	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	newStrn = malloc(sizeof(char) * n);
	if (newStrn)
	{
		_strncpy(newStrn, s1);
		_strcat(newStrn, s2, n);
		if (n <= len2)
		{
			newLen = len1 + n;
			newStrn[newLen - 1] = '\0';
		}
		else
		{
			newLen = len1 + len2;
			newStrn[newLen - 1] = '\0';
		}
		return (newStrn);
	}
	else
		return (NULL);
}
