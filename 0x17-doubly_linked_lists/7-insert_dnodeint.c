#include "lists.h"
/**
 *insert_dnodeint_at_index - insert a node at any position
 *@h: the first node
 *@idx: the position
 *@n: the data
 *Return: the node added
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new_node;
	unsigned int tracker;


	tracker = 0;
	if (*h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	while (temp != NULL && tracker < idx - 1)
	{
		temp = temp->next;
		tracker++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next)
		temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}

