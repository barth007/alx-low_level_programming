#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginining of the lists
 *@n: data to be added to the node
 *@head: the first node
 *Return: the newly added node
**/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;
	if (*head)
		(*head)->prev = temp;
	*head = temp;
	return (*head);
}
