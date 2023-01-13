#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination strings
 * @src: the source strings
 * @n: number bytes
 * Return: A pointer to the dest
**/
char *_strcat(char *dest, char *src, unsigned int n)                                                                                                  {
        unsigned int i, len1, len2, j, k;

        len1 = 0;
        for (i = 0; dest[i] != '\0'; i++)
                len1++;
	 len2 = 0;
        for (k = 0; src[k] != '\0'; k++)
                len2++;
	if ( n >= len2)
	{
		for (j = 0; src[j] != '\0'; j++)
			dest[len1 + j] = src[j];
		return (dest);
	}
	else
	{
        	for (j = 0; j <= n; j++)
                	dest[len1 + j] = src[j];
        	return (dest);
	}
}
