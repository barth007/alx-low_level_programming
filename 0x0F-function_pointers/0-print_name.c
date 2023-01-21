#include "function_pointers.h"
/**
 * print_name -function takes two argument string pointer and function pointer
 * @name: argument pointer to the string
 * @f: function pointer that takes a string pointer to char data type
 * exit: exit from the code if string argument is NULL
**/
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
	exit(EXIT_FAILURE);
}
