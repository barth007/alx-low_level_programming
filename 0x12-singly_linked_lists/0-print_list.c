#include "lists.h"
/**
 * print_list - function returns number of nodes and print all the elements
 * @h: argument string to pass into the function
 * Return: Always return counter
**/
size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *current;

	current = h;
	counter = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", current->len, current->str);
		current = current->next;
		counter++;
	}
	return (counter);
}
