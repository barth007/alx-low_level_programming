#include "lists.h"
/**
 *add_nodeint_end - adds a node to end of a l-list
 *@head: pointer to a node
 *@n: an element of the l-list
 *Return: always the last node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr;

	temp = malloc(sizeof(listint_t *));
	if (!temp)
		return (NULL);
	ptr = *head;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
