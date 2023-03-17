#include "lists.h"
/**
 *add_dnodeint_end - adding a node to the end of lists
 *@n: the data to be added
 *@head: the node to start with
 *Return: the new node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *tp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head)
	{
		tp = *head;
		while (tp->next != NULL)
			tp = tp->next;
		tp->next = temp;
		temp->prev = tp;
	}
	else
	{
		(*head) = temp;
		temp->prev = NULL;
	}
	return (*head);

}

