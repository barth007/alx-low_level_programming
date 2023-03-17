#include "lists.h"
/**
 *free_dlistint - frees a dlistint_t list
 *@head: the node to be freed
**/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_nodes;
	dlistint_t *last_nodes;

	if (head)
	{
		free_nodes = head;
		while (free_nodes !=NULL)
		{
			last_nodes = free_nodes;
			free_nodes = free_nodes->next;
			free(last_nodes);
		}
	}
	exit(EXIT_FAILURE);
}
