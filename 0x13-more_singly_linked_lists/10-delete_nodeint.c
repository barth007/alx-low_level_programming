#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at index
 * @head: the node to be deleted
 * @index: index of the node to be deleted
 * Return: return 1 if success and -1 if file
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int counter;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	counter = 0;
	while (ptr != NULL && counter != index)
	{
		ptr = ptr->next;
		counter++;
	}
	if (counter == index)
	{
		temp = ptr->next;
		ptr->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);

}
