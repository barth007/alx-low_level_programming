#include "main.h"
/**
 * _strlen - function that return length of a string
 * @s: pointer variable
 *Return: int data type
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}
