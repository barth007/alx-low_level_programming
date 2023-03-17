#include "lists.h"
/**
 *sum_dlistint - sum all element in the list
 *@head: the first node
 *Return: sum of the element
**/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	sum = 0;
	if (head)
	{
		temp = head;
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
		return (sum);
	}
	return (sum);
}
