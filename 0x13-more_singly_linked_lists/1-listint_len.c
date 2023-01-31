#include "lists.h"
/**
 *listint_len - print number of nodes
 *@h: pointer to the list
 *Return: number of nodes
**/
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t counter;

	current = h;
	counter = 0;

	while (current)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
