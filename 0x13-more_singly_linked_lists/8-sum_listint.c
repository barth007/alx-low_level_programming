#include "lists.h"
/**
 *sum_listint - returns the sum of all data(n) of a l-list
 *@head: the node of the linked list
 *Return: sum of data(n)
**/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
