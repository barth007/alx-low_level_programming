#include "lists.h"
/**
 *free_listint2 - frees up the list
 *@head: incoming node
**/
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (*head != NULL)
	{
		temp_node = *head;
		while (temp_node != NULL)
		{
			temp_node = temp_node->next;
			free(*head);
			*head = temp_node;
		}
		*head = temp_node;
	}
}
