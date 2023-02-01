#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node
 * @index: index position of the node
 * Return: the node's data
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *temp;
	int _data;

	if (head == NULL)
		return (NULL);
	temp = head;
	counter = 0;
	while (temp->next != NULL)
	{
		if (counter == index)
		{
			_data = temp->n;
			printf("%d\n", _data);
		}
		counter++;
		temp = temp->next;
	}
	return (temp);
}
