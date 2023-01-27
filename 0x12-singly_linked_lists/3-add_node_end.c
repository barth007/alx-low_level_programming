#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 * @head: the first node
 * @str: the string pointer to char
 * Return: the node added to the last
**/
list_t *add_node_end(list_t **head, const char *str)
{
	size_t length;
	list_t *new_node;
	list_t *last;

	/*allocate new node*/
	new_node = malloc(sizeof(list_t *));
	/* check if node allocated*/
	if (!new_node)
		return (NULL);
	last = *head;
	/*put in the data*/
	new_node->str = strdup(str);
	/*find length of incoming string*/
	length = 0;
	while (*str++)
		length++;
	/*assign length to struct value*/
	new_node->len = length;
	/*make next of new node as the last node ending with NULL*/
	new_node->next = NULL;
	/*if linked list empty , then make the new node as head*/
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);

	}
	/* else travarse till the last node*/
	while (last->next != NULL)
		last = last->next;
	/* change the next of last node*/
	last->next = new_node;
	return (last->next);
}
