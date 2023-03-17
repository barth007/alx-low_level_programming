#include "lists.h"
/**
 * print_dlistint - prints all element of a double linked list
 *@h: the node to be printed
 *Return: number of nodes printed
**/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
