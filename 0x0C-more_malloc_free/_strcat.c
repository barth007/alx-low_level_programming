#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: the destination strings
 * @src: the source strings
 * @n: number bytes
 * Return: A pointer to the dest
**/
char *_strcat(char *dest, char *src, unsigned int n)                                                                                                 
{
        unsigned int i, len1, len2;

        len1 = 0;
        for (i = 0; dest[i] != '\0'; i++)
                len1++;
	 len2 = 0;
        for (i = 0; src[i] != '\0'; i++)
                len2++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len1 + i] = src[i];
	dest[len1 + i] = '\0';
	return (dest);
}
