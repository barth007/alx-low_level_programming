#include "lists.h"
/**
 *print_listint - prints all elements of a listint_t list.
 *@h: a string pointer to listint_t
 *Return: length of node
**/
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t counter;

	current = h;
	counter = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);

}
