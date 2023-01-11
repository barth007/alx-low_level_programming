#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination strings
 * @src: the source strings
 * Return: A pointer to the dest
**/
char *_strcat(char *dest, char *src)
{
	int i, len, j;

	len = 0;
	for (i = 0; dest[i] != '\0'; i++)
		len++;
	for (j = 0; src[j] != '\0'; j++)
		dest[len + j] = src[j];
	return (dest);
}
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
 * str_concat - concatenate two strings and allocate space for it
 * @s1: first string
 * @s2: second string
 * Return: A pointer to the allocated
**/
char *str_concat(char *s1, char *s2)
{
	char *newStrn;
	int len1, len2, i, j, newLen;

	if ((s1 == NULL) & (s2 == NULL))
		s1 = s2 = " ";
	if ((s1 != NULL) & (s2 == NULL))
		s2 = " ";
	if ((s2 != NULL) & (s1 == NULL))
		s1 = " ";
	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	newLen = (len1 + len2) + 1;
	newStrn = malloc(newLen * sizeof(char));
	if (newStrn)
	{
		_strncpy(newStrn, s1);
		_strcat(newStrn, s2);
		newStrn[newLen - 1] = '\0';
		return (newStrn);
	}
	else
		return (NULL);
}
