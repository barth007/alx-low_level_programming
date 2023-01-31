#include "lists.h"
/**
 *free_listint2 - frees up the list
 *@head: incoming node
**/
void free_listint2(listint_t **head)
{
	listint_t *free_node;
	listint_t *last_node;

	free_node = *head;
	while (free_node != NULL)
	{
		last_node = free_node;
		free_node = free_node->next;
		free(last_node);
	}
	free_node = NULL;
}
