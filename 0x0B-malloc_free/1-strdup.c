#include "main.h"
/**
 * _strdup -  function returns a pointer to a new string which is ia
 * duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 * @str: string to be copied
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	int len, i, j;

	if (str == NULL)
		return (NULL);
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
		len++;
	cpy = malloc(len * sizeof(char) + 1);
	if (cpy)
	{
		for (j = 0; j <= len; j++)
		{
			cpy[j] = str[j];
			if (j == len)
				cpy[j] = '\0';
		}
		return (cpy);
	}
	else
		return (NULL);

}
