#include "lists.h"
/**
 *add_nodeint_end - adds a node to end of a l-list
 *@head: pointer to a node
 *@n: an element of the l-list
 *Return: always the last node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t *));
	if (!new_node)
		return (NULL);
	last_node = *head;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}
