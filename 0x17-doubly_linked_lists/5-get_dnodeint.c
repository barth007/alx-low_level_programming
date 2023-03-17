#include "lists.h"
/**
 *get_dnodeint_at_index - return a node at a given index
 *@head: the first node
 *@index: position of the node to return
 *Return: the node
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter;

	counter = 0;
	if (head)
	{
		temp = head;
		while (head != NULL)
		{
			if (counter == index)
				return (temp);
			temp = temp->next;
			counter++;
		}
	}
	return (NULL);
}
