#include "lists.h"
/**
 *free_listint - frees up allocated space on heap
 *@head: pointer to node
**/
void free_listint(listint_t *head)
{
	listint_t *free_node;
	listint_t *last_node;

	free_node = head;
	while (free_node != NULL)
	{
		last_node = free_node;
		free_node = free_node->next;
		free(last_node);
	}
}
