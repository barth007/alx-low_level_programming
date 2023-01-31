#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t
 *@head: the first node
 *Return: returns the data of the head node
**/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int _data;

	temp = *head;
	if (temp == NULL)
		return (0);
	_data = temp->n;
	*head = temp->next;
	free(temp);
	return (_data);
}
