#include "lists.h"
/**
 * list_len - print the number of nodes
 * @h: strings to be printed
 *Return: number of node as size_t
**/
size_t list_len(const list_t *h)
{
	const list_t *current;
	size_t counter;

	counter = 0;
	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("Error\n");
		current = current->next;
		counter++;
	}
	return (counter);
}
