#include "lists.h"
/**
 *insert_nodeint_at_index - adds a new node at any position
 *@head: first node
 *@idx: required index to add
 *@n: data to a node
 *Return: all nodes
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int tracker;

	if (*head == NULL)
		return (NULL);
	ptr2 = malloc(sizeof(listint_t *));
	if (!ptr2)
		return (NULL);
	ptr2->n = n;
	ptr2->next = NULL;
	ptr = *head;
	tracker = 0;
	while (idx != 1 && ptr->next != NULL)
	{
		ptr = ptr->next;
		idx--;
		tracker++;
	}
	if (tracker <= idx - 2)
	{
		ptr2->next = ptr->next;
		ptr->next = ptr2;
		return (ptr2);
	}
	else
		return (NULL);
}
