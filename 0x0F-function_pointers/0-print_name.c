#include "function_pointers.h"
/**
 * print_name -function prints a name.
 * @name: argument pointer to the string
 * @f: function pointer that takes a string pointer to char data type
 * exit: exit from the code if string argument is NULL
**/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
