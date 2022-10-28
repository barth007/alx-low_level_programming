#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */

char *cap_string(char *n)
{
	int i, j;
	int capital = 32;
	int separators[] = {',', ';', '.', '?', '"',
	'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{

		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - capital;
		capital = 0;
		for (j = 0; j <= 12; j++)
		{
			if (n[i] == separators[j])
			{
				j = 12;
				capital = 32;
			}
		}
	}
	return (n);
}
