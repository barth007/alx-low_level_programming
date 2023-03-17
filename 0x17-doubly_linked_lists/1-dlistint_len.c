#include "lists.h"
/**
 *dlistint_len - returns the number of element in a double linked list
 *@h: the node to check for it length
 *Return: number of nodes
**/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
