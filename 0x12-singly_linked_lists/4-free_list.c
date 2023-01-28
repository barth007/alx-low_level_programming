#include "lists.h"
/**
 * free_list -frees up all allocated memory
 * @head: first nodes
 * Return: voids
**/
void free_list(list_t *head)
{
	list_t *free_nodes;
	list_t *last_nodes;

	if (head == NULL)
		return;
	free_nodes = head;
	while (free_nodes != NULL)
	{
		last_nodes = free_nodes;
		free_nodes = free_nodes->next;
		free(last_nodes->str);
		free(last_nodes);
	}
	head = NULL;
}
