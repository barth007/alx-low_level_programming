#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *struct node - a user defined data containing a data and next node
 *@data: this is a string pointing to a char
 *@n: long integer
 *@next: this is the next node to point to
**/
typedef struct node
{
	int data;
	size_t n;
	struct node *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif
