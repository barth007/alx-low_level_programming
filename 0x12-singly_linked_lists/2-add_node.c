#include "lists.h"
/**
 *add_node- adding a node at the beginning of the linked list
 *@head: the first node
 *@str: the data to be added to
 *Return: the new node
**/
list_t *add_node(list_t **head, const char *str)
{
	size_t length;
	list_t *new_node;

	/*allocate node*/
	new_node = malloc(sizeof(list_t *));
	/* put in the data */
	new_node->str = strdup(str);

	/*find length of the string*/
	length = 0;
	while (*str++)
		length++;
	/* put in th length*/
	new_node->len = length;
	/* make next of new node as head*/
	new_node->next = (*head);
	/*move the head to point to the new node*/
	(*head) = new_node;
	return (*head);
}
